/*
    By: @vq
    Created: 2021/12/11 by vq
*/

#ifndef LIB_MATRIX_H
#define LIB_MATRIX_H

#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

void    matrix_multiplication(const int f[3][3],const int kernel[3][3], int res[3][3]);
void    printM(int M[3][3]);
int**   MatrixConvolution(int f[3][3], int kernel[3][3]);
int**   matrix_multiplication2(const int f[3][3], const int kernel[3][3]);
void    printM_p(int** M);

#endif