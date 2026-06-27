#include <stdio.h>
#include <string.h>

void findlongest(char *str){
    char longest[50]="",word[50]="";
    int maxLen=0,currentLen=0;
    
    for(size_t i=0;i <=strlen(str);i++){
        if(str[i] != ' '  && str[i]!='\0'){
            word[currentLen++]=str[i];
        } else{
            word[currentLen] ='\0';
            if(currentLen > maxLen){
                maxLen = currentLen;
                strcpy(longest,word);
            }
            currentLen=0;
        }
    }
    printf("Longest word:%s\n",longest);
}

int main(){
    char str[]="C programming is fun";
    findlongest(str);
    return 0;
}