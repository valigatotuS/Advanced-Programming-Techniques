/*
    By: @vq
    Created: 2021/12/30 by vq
*/

#include "wpo4_lib.h"

void EnqueueLQSorted(struct linked_queue* lq, char value){
    struct node* el;
    el = (struct node*)malloc(sizeof(struct node));
    el->data = value;
    el->next = NULL;

    struct node* cursor_node;

    if(lq->count==0)                                                            // when no elements
        lq->head = lq->tail = el;
    else{
        cursor_node = lq->head;                                                 
        if(lq->head->data > value){                                             // when lower than head        
            el->next = cursor_node;
            lq->head = el;                                                      // update head
        }
        else{                                                                   
            while(cursor_node->next!=NULL && cursor_node->next->data < value)   // moving through queue
                cursor_node = cursor_node->next;               
            
            el->next = cursor_node->next;
            cursor_node->next = el;
            if(cursor_node == lq->tail){                                        // update tail
                lq->tail = el;
                // printf("new tail->%c\n", value);
            }
        }        
    }
    lq->count++;
}