/*
    By: @vq
    Created: 2021/12/16 by vq
*/

#include "wpo2_lib.h"

typedef int (*area_f)(int,int);

int calc_area(area_f ptr, int h, int w){
    return (*ptr)(h,w);
}

int area_r(int width, int height){
    return width*height;
}
