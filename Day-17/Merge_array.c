#include <stdio.h>

int main(){
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},res[10];
    int i,j;

    for(i=0;i<5;i++) res[i]=a[i];
    for(j=0;j<5;j++) res[i+j]=b[j];

    printf("Merged Array:");
    for(i=0;i<10;i++)
    printf("%d",res[i]);

    return 0;
}