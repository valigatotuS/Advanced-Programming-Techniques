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

    // Declaring output Matric[3X3] & Allocating mem in the heap (because we want int** M & not int M[5][5])
    rows = 3, cols = 3;
    int** outputMatrix = (int**)malloc((rows + 1) * sizeof(int*));
    
    for (int i = 0; i < rows; i++) 
        outputMatrix[i] = (int*)malloc(cols * sizeof(int));
    outputMatrix[rows] = '\0'; // sentinel for security

    // Convolution of the matrix
    for (int i=0; outputMatrix[i]; i++){
        for (int j=0; j < cols; j++)
            outputMatrix[i][j] = tmpM[i+1][j+1]*kernel[1][1] + tmpM[i][j+1]*kernel[0][1] + tmpM[i+1][j]*kernel[1][0] + tmpM[i+2][j+1]*kernel[2][1] + tmpM[i+1][j+2]*kernel[1][2];
    }   

    return outputMatrix;
}