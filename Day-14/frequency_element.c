#include <stdio.h>
int main(){
    int arr[]={1,2,8,3,2,2,5},n=7,key,count=0;
    printf("Enter element to find frequeny:");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i]==key) count++;
    }
    printf("Frequency of %d is:%d\n",key,count);
    return 0;
}