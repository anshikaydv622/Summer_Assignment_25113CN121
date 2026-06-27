#include <stdio.h>
#include <string.h>

int main(){
    char words[4][20]={"Elephant","Cat","Dog","Butterfly"};
    char temp[20];

    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(strlen(words[i])>strlen(words[j])){
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);
            }
        }
    }
    printf("Sorted by length:\n");
    for(int i=0;i<4;i++)
    printf("%s",words[i]);
    return 0;
}