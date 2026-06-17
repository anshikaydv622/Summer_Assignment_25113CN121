#include <stdio.h>
int main(){
    int n,i;

    scanf("%d",&n);

    int largest = 1;

    for(i=2;i<=n;i++){
        while(n%i==0){
            largest = i;
            n=n/i;
        }
    }
    printf("Largest prime factor= %d /n",l largest);

    return 0;


}