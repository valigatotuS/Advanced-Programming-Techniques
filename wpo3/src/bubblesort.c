/*
    By: @vq
    Created: 2022/01/12 by vq
*/

#include "wpo3_lib.h"

void bubble_sort(int arr[], int size){
    for(int i = size-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1])
                (arr[j]^=arr[j+1]), (arr[j+1] ^= arr[j]), (arr[j] ^= arr[j+1]);
        }            
    }
}

// for swapping values we can execute the betwise operator XOR (^), 3 times