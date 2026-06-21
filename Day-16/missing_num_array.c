#include <stdio.h>

int main(){
    int n=5;
    int arr[]={1,2,4,5};
    int total_sum=n*(n+1)/2;
    int current_sum=0;

    for(int i=0;i<n-1;i++){
        current_sum+=arr[i];
    }
    printf("The missing number is: %d\n",total_sum-current_sum);
    return 0;
}