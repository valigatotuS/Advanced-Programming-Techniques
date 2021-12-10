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

int strcpos_(const char* str, const char c){
    int pos = 0;
    while(*str && *str!=c){
        str++;
        pos++;
    }
    return pos;
}

char** strsplit_(const char* str, const char del){
    int arr_size = strcntdel_(str, del);
    char** arr = (char**)malloc((arr_size+1)*sizeof(char*));
    int w_index = 0, c_index = 0, str_size = 0;

    while (*str){
        // checking delimiter
        while(*str==del && *str)
            str++;

        // allocating memory for the word 
        str_size = strcpos_(str, del);
        arr[w_index] = (char*)malloc((str_size+1)*sizeof(char));
        w_index++;

        // filling the word
        while(*str && *str!=del)        
            arr[w_index][c_index++] = *(str++);
        arr[w_index][c_index] = '\0';
    }
    arr[w_index] = '\0';
    return arr;
}

