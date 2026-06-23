#include <stdio.h>

char first_repeating(char*str){
    int visited[256]={0};
    for(int i=0;str[i];i++) {
        if(visited[(unsigned char)str[i]])
        return str[i];
        visited[(unsigned char)str[i]]=1;
    }
    return '\0';
}

int main(){
    char str[]="assimilation";
    char result=first_repeating(str);
    if (result)
    printf("First repeating character is:%c\n",result);
    else
    printf("No repeating character found.\n");
    return 0;
}