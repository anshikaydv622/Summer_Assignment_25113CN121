#include <stdio.h>
//Function definition
int findMax(int a,int b){
    if(a>b)
     return a;
    else
     return b;
}

int main(){
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);

    printf("Maximum: %d\n",findMax(n1,n2));

    return 0;
}