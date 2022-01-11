/*
    By: @vq
    Created: 2021/12/11 by vq
*/

#include "lib_matrix.h"
#define ROWS 3
#define COLS 3

void matrix_multiplication(const int f[ROWS][COLS], const int kernel[ROWS][COLS], int res[ROWS][COLS]){
    for(int r = 0; r < ROWS; r++){
        for (int c = 0; c < COLS; c++){
            for (int k = 0; k < ROWS; k++)
                res[r][c] += f[r][k] * kernel[k][c];
        }
    }
}

int** matrix_multiplication2(const int f[ROWS][COLS], const int kernel[ROWS][COLS]){
    int** res = (int**)malloc((ROWS)*sizeof(int));
    for(int r = 0; r < ROWS; r++){
        res[r] = (int*)malloc((COLS)*sizeof(int));
        for (int c = 0; c < COLS; c++){
            for (int k = 0; k < ROWS; k++)
                res[r][c] += f[r][k] * kernel[k][c];
        }
    }
    return res;
}

void printM_p(int** M){
    for(int r = 0; r < ROWS; r++){
        for(int c = 0; c < COLS; c++)
            printf("(%d)", M[r][c]);
        puts(""); //newline
    }
}

void printM(int M[ROWS][COLS]){
    for(int r = 0; r < ROWS; ++r){
        for (int c = 0; c < COLS; ++c)
            printf("(%d)", M[r][c]);
        printf("\n");
    }
    printf("\n");
}
