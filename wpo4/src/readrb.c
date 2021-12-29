/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#include "wpo4_lib.h"

char Read(struct rb* rbuffer_p){
    char e = '\0';

    /*  
        slight modification here in the condition of the if-statement
        compared to pdf description because otherwise there will be 
        a problem when looping over max.
    */

    if(rbuffer_p->read_index != rbuffer_p->write_index){ 
        e = rbuffer_p->data[rbuffer_p->read_index];
        rbuffer_p->read_index = (rbuffer_p->read_index < rbuffer_p->MAX_CAPACITY) ? rbuffer_p->read_index+1 : 0;
    }

    else
        printf("read_index is equal to write_index, ");
    return e;
}