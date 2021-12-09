/*
    By: @vq
    Created: 2021/12/08 by vq
*/

int strcpos_(const char* str, const char c){
    int pos = 0;
    while(*str && *str!=c){
        str++;
        pos++;
    }
    return pos;
}