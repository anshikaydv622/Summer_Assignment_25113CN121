#include <stdio.h>
int main(){
    double base,result =1.0;
    int exponent,i;
    //taking input from the user
    printf("Enter base(x):");
    scanf("%lf",&base);
    printf("Enter exponent (n):");
    scanf("%d",&exponent);
    //Logic to calculate x^n
    //We multiply result by the base 'n' times
    for (i=1;i<=exponent;i++){
        result =result * base;
    }
    printf("%.2lf raised to the power %d is: %.2lf\n",base,exponent,result);

    return 0;
}
