/*
    By: @vq
    Created: 2021/12/08 by vq
*/

int strcntdel_(const char* str, char del){
    int count = 0;
    while(*(++str)){
        char nextc = *(str+1), currc = *str;
            if(nextc==del && currc!=del)
                count++;
    }
    return count;
}