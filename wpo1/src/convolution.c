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

// void matrix_convolution(const int f[3][3], const int kernel[3][3], int res[3][3]){
//     // int res[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
//     for(int r = 0; r < 3; ++r){
//         for (int c = 0; c < 3; ++c){
//             for (int k = 0; k < 3; ++k)
//                 res[r][c] += f[r][k] * kernel[k][c];
//         }
//     }
// }

// void conv2(int a[3][3], int* w[3][3], int* result[3][3])
// {
//     register double acc;
//     register int i; 
//     register int j;
//     register int k1, k2;
//     register int l1, l2;
//     register int t1, t2;

//     for(i = 0; i < 3; i++) 
//     {
//         t1 = i * 3; // loop invariants
//         for(j = 0; j < 3; j++) 
//         {   
//             acc = 0.0;
//             for(k1 = 3 - 1, k2 = 0; k1 >= 0; k1--, k2++)
//             {
//                 t2 = k1 * 3;  // loop invariants
//                 for(l1 = 3 - 1, l2 = 0; l1 >= 0; l1--, l2++)
//                 {
//                     acc += w[t2 + l1] * a[(i + k2) * 3 + (j + l2)];
//                 }
//             }
//             result[t1 + j] = acc;
//         }
//     }
// }
