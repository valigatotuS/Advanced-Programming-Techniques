/*
    By: @vq

    Created: 2021/12/08 by vq
    
*/

int strlength(char* str){
    int len = 0;
    while(str[len] != 0){
        len++;
    }
    return len;
}

char** Str_split(char* mystr, char delimiter){
    int indexA = 0, count = 0, wordIndex = 0, totalwords = 0;
    char words**;

    for (indexA = 0; indexA < strlength(mystr); indexA++)
    {
        if (mystr[indexA] == delimiter || mystr[indexA] == '\0'){
            words[totalwords][wordIndex] = '\0';
            totalwords++;
            wordIndex = 0;
        }
        else{
            words[totalwords][wordIndex] = mystr[indexA];
            wordIndex++;
        }   
    }    
    return words;
}

int main() {

    
   char *firstString = "Test First String. ";
   char** test = Str_split(firstString, ' ');
//    char *secondString = "Another String Here.";
//    char *combined = cat(firstString, secondString);

//    printf("%s", combined);

//    free(combined);
   return 0;
}