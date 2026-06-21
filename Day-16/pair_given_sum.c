#include <stdio.h>

int main(){
    int arr[]={1,4,6,2,8};
    int target=10;
    int n=5,found=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("Pair found:(%d,%d)\n",arr[i],arr[j]);
                found = 1;
            }
        }
    }
    if(!found)printf("No pair with given sum exists.\n");
    return 0;
}