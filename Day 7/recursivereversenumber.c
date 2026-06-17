#include <stdio.h>
int reverse(int num,int rev){

    if(num==0){
        return rev;
    }

    return reverse(num/10,rev*10+(num%10));
}
int main(){
    int number,result;

    printf("Enter a number:");
    scanf("%d",&number);

    result=reverse(number,0);

    printf("Reversed Number:%d\n",result);

    return 0;
}