/*
    By: @vq
    Created: 2021/12/16 by vq
*/

#ifndef WPO2_LIB_H
#define WPO2_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // we already coded the string manipulations functions in wpo1
#include <stdarg.h>

typedef int     (*area_f)(int,int);
int             calc_area(area_f ptr, int h, int w);
int             area_r(int width, int height);
void            bit_decomp();
void            fancy_print(const  char* str, int num, ...);
int             count_char(const char* str, const char token);
void            read_config_file(const char* path);
double          read_operation(char* line);

#endif