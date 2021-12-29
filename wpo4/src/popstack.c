/*
    By: @vq
    Created: 2021/12/29 by vq
*/

#include "wpo4_lib.h"

char Pop(struct sq* stack_p){
    char e = '\0';
    if(stack_p->current_index >= 1){
        e = stack_p->data[stack_p->current_index-1];
        stack_p->data[stack_p->current_index-1] = '\0';
        stack_p->current_index--;
    }
    return e;
}