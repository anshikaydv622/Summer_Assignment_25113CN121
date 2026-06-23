#include <stdio.h>

int main(){
    int arr[]={10.25,30,45,50},n=5,key,i,found=0;
    printf("Enter element to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index %d\n",i);
            found=1;
            break;
        }
    }
    if(!found)
    printf("Element not found.\n");
    return 0;
}
