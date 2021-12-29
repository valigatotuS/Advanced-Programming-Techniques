/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#include "wpo4_lib.h"

char Dequeue(struct sq* queue_p){
    char e = '\0';
    if(queue_p->current_index >= 1){
        e = queue_p->data[0];
        for(int i = 0; i < (queue_p->current_index); i++)
            queue_p->data[i] = queue_p->data[i+1];
        queue_p->current_index--;
    }
    return e;
}
