#include <stdio.h>
//Function definition
long long findFactorial(int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num<0)
    printf("Factorial not defined for negative numbers.\n");
    else
    printf("Factorial of %d is %lld\n",num,findFactorial(num));

    return 0;
}
