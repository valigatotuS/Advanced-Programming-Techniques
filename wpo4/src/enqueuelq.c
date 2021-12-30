/*
    By: @vq
    Created: 2021/12/30 by vq
*/

#include "wpo4_lib.h"

void EnqueueLQ(struct linked_queue* lq, char value){
    struct node* el;
    el = (struct node*)malloc(sizeof(struct node));
    el->data = value;
    el->next = NULL;

    if(lq->tail!=NULL){                // if not empty
        lq->tail->next = el;
        lq->tail = el;
    }
    else                               // if empty
        lq->head = lq->tail = el;

    lq->count++;
}