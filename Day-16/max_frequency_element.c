#include <stdio.h>
int main(){
    int arr[]={1,3,2,3,4,3,2};
    int n=7,max_count=0,element;

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count>max_count){
            max_count=count;
            element=arr[i];
        }
    }
    printf("Element with max frequency:%d(appears %d times)\n",element,max_count);
    return 0;
}
