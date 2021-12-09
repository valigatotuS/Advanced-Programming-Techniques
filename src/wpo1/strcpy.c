/*
    By: @vq

    Created: 2021/12/08 by vq

*/

char* strcpy_(const char* str){
    int str_length = strlen_(str);
    char* strcpy = (char*)malloc((str_length+1)*sizeof(char));
    int index = 0;

    while(*str){
        strcpy[index] = *(str++); 
        index++;
    }

    strcpy[index] = '\0';

    return strcpy;
}
