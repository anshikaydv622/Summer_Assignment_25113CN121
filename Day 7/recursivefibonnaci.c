#include <stdio.h>
int fibonnaci(int n){
    if(n<=1){
        return n;
    }
    return fibonnaci(n-1)+fibonnaci(n-2);
}

int main(){
    int terms,i;

    printf("Enter the number of terms:");
    scanf("%d",&terms);

    printf("Fibonnaci Series:");
    for(i=0;i<terms;i++){
        printf("%d",fibonnaci(i));
    }
    return 0;
}