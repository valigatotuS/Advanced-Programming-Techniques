/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#include "wpo4_lib.h"

void Push(struct sq* stack_p, char e){
    if(stack_p->current_index <= stack_p->MAX_CAPACITY){
        stack_p->data[stack_p->current_index] = e;
        stack_p->current_index++;
    }
}