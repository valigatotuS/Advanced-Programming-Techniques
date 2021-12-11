/*
    By: @vq
    Created: 2021/12/11 by vq
*/

#include "lib_matrix.h"

void matrix_multiplication(const int f[3][3], const int kernel[3][3], int res[3][3]){
    // int res[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for(int r = 0; r < 3; ++r){
        for (int c = 0; c < 3; ++c){
            for (int k = 0; k < 3; ++k)
                res[r][c] += f[r][k] * kernel[k][c];
        }
    }
}

void printM3x3(int M[3][3]){
    for(int r = 0; r < 3; ++r){
        for (int c = 0; c < 3; ++c)
            printf("(%d)", M[r][c]);
        printf("\n");
    }
    printf("\n");
}

void matrix_convolution(const int f[3][3], const int kernel[3][3], int res[3][3]){
    // int res[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for(int r = 0; r < 3; ++r){
        for (int c = 0; c < 3; ++c){
            for (int k = 0; k < 3; ++k)
                res[r][c] += f[r][k] * kernel[k][c];
        }
    }
}
