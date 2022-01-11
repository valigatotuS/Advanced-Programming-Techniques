/*
    By: @vq
    Created: 2021/01/6 by vq
*/

#include "lib_matrix.h"

int** MatrixConvolution(int f[3][3], int kernel[3][3]){
    // Matrix[3X3] with blank border => [5X5]
    int rows = 5, cols = 5;
    int tmpM[rows][cols];

    // Filling with zero's
    for (int i=0; i < rows; i++){
        for (int j=0; j < cols; j++)
            tmpM[i][j] = 0;
    }

    // Filling center of Matrix[5x5] with f
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++)
            tmpM[i+1][j+1] = f[i][j];
    }   

    // Declaring resM and init it with the convolution of f with kernell
    rows = 3, cols = 3;
    int** resM = (int**)malloc((rows) * sizeof(int*));
    
    for (int i = 0; i < rows; i++){
        resM[i] = (int*)malloc((cols) * sizeof(int));
        for (int j=0; j < cols; j++)
            resM[i][j] = tmpM[i+1][j+1]*kernel[1][1] + tmpM[i][j+1]*kernel[0][1] + tmpM[i+1][j]*kernel[1][0] + tmpM[i+2][j+1]*kernel[2][1] + tmpM[i+1][j+2]*kernel[1][2];
    }   
    return resM;
}