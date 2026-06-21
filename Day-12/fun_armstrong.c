#include <stdio.h>
#include <math.h>

int isArmstrong(int n){
    int sum=0, remainder,temp=n,digits=0;
    //Count digits
    while(temp !=0){temp/=10; digits++;}
    temp=n;
    while(temp!=0){
        remainder =temp%10;
        sum+=pow(remainder,digits);
        temp/=10;
    }
    return (sum==n);
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isArmstrong(num)) 
    printf("%d is an Armstrong number.\n",num);
    else
    printf("%d is not an Armstrong number.\n",num);
    return 0;
}