/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#include "wpo4_lib.h"

void Write(struct rb* rbuffer_p, char e){
    int* w_i = &(rbuffer_p->write_index);
    int* r_i = &(rbuffer_p->read_index);
    int max = rbuffer_p->MAX_CAPACITY;

    if(*r_i != *w_i){
        rbuffer_p->data[*w_i-1] = e;
        *w_i = (*w_i-1 < max) ? *w_i+1 : 0;
    }
    else
        printf("read_index is equal to write_index, ");
}