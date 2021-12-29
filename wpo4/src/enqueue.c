/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#include "wpo4_lib.h"

void Enqueue(struct sq* queue_p, char e){
    if(queue_p->current_index <= queue_p->MAX_CAPACITY){
        queue_p->data[queue_p->current_index] = e;
        queue_p->current_index++;
    }
}

// or just put <#define Enqueue Push> in header file to spare some lines of code

