#include <stdio.h>
#include <string.h>

char first_non_repeating(char*str){
    int count[256]={0};
    for(int i=0;str[i];i++) 
    count[(unsigned char)str[i]]++;
    for(int i=0;str[i];i++){
        if(count[(unsigned char)str[i]]==1)
        return str[i];
    }
    return '\0';
}

int main(){
    char str[]="anshika";
    char result=first_non_repeating(str);
    if (result)
    printf("First non-repeating character is:%c\n",result);
    else
    printf("No non-repeating character found.\n");
    return 0;
}