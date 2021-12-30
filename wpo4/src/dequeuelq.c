/*
    By: @vq
    Created: 2021/12/30 by vq
*/

#include "wpo4_lib.h"

char DequeueLQ(struct linked_queue* lq){
    char e = '\0';

    if(lq->count!=0){                // if not empty
        struct node* tmp_node;       // need for temporary node to keep pointer for free-operation
        tmp_node = lq->head;
        e = tmp_node->data;
        lq->head = lq->head->next;
        lq->count--;
        free(tmp_node);
    }    
    return e;
}