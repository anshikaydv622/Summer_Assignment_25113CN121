#include <stdio.h>
long factorial(int n){
    if (n==0 || n==1){
        return 1;
    } else{
        return n * factorial(n-1); //Recursive call
    }
}

int main (){
    int num;
    printf("Enter a Positive integer:");
    scanf("%d",&num);

    if(num<0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %ld\n",num,factorial(num));
    }
    return 0;
}
