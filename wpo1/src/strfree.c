/*
    By: @vq

    Created: 2021/12/11 by vq

*/

#include "lib_str.h"

void strfree_(char* str){
    if(*str){
        free(str);
        str = NULL;
    }
}
