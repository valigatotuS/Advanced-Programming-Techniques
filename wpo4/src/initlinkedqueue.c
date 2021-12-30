/*
    By: @vq
    Created: 2021/12/30 by vq
*/

#include "wpo4_lib.h"

void InitLQueue(struct linked_queue* lq){
    lq->count = 0;
    lq->head = NULL;  // preventing dangling pointers
    lq->tail = NULL;
}