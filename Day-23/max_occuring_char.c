#include <stdio.h>

char max_occuring(char*str){
    int count[256]={0},max=-1;
    char result;
    for (int i=0;str[i];i++){
        count[(unsigned char)str[i]]++;
    }
    for(int i=0;str[i];i++){
        if(max<count[(unsigned char)str[i]]){
            max=count[(unsigned char)str[i]];
            result=str[i];
        }
    }
    return result;
}
int main(){
    char str[]="test sample";
    printf("Max occuring character is:%c\n",max_occuring(str));
    return 0;
}