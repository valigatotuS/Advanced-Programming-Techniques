/*
    By: @vq
    Created: 2021/12/11 by vq
*/

#ifndef LIB_MATRIX_H
#define LIB_MATRIX_H

#include <stdio.h>
#include <stdlib.h>

void    matrix_multiplication(const int f[3][3],const int kernel[3][3], int res[3][3]);
void    printM3x3(int M[3][3]);
int**   MatrixConvolution(int f[3][3], int kernel[3][3]);

#endif