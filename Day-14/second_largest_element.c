#include <stdio.h>
#include <limits.h>

int main(){
    int arr[]={12,35,1,0,34},n=5;
    int max=INT_MIN,secondMax=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax=max;
            max=arr[i];
        } else if(arr[i]>secondMax &&arr[i] !=max){
            secondMax=arr[i];
        }
    }
    printf("The second largest element is: %d\n",secondMax);
    return 0;
}