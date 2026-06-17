#include <stdio.h>

int main(){
    long long binary;
    int decimal = 0,i = 0,rem;

    printf("Enter a Binary number :");
    scanf("%lld",&binary);

    while(binary!=0){
        rem=binary%10;
        binary/=10;
        decimal +=rem*pow(2,i);
        ++i;
    }
    printf("Decimal equivalent: %d\n",decimal);

    return 0;
}