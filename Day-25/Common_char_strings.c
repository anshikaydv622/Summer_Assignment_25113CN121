#include <stdio.h>
#include <string.h>

void findCommon(char s1[],char s2[]){
    int count[256]={0};
    printf("Common characters: ");
    for(int i=0;s1[i];i++) count[(int)s1[i]]=1;
    for(int i=0;s2[i];i++){
        if(count[(int)s2[i]]==1){
            printf("%c",s2[i]);
            count[(int)s2[i]]=0;
        }
    }
}

int main(){
    findCommon("hello","world");
    return 0;
}