/*
    By: @vq
    Created: 2021/12/16 by vq
*/

#ifndef WPO2_LIB_H
#define WPO2_LIB_H

#include <stdio.h>

typedef int     (*area_f)(int,int);
int             CalcArea(area_f ptr, int h, int w);
int             AreaR(int width, int height);
void            PrintBitDecomp();
void            FancyPrint(char* str, ...);

#endif