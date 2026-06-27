#include <stdio.h>
void mergeArrays(int arr1[],int n1,int arr2[],int n2,int res[]){
    int i=0,j=0,k=0;
    while (i<n1 && j<n2){
        if (arr1[i]<arr2[j])res[k++]=arr1[i++];
        else res[k++]=arr2[j++];
    }
    while (i<n1) res[k++]=arr1[i++];
    while (j<n2)res[k++]=arr2[j++];
}

int main(){
    int a[]={1,3,5,7},b[]={2,4,6,8};
    int res[8];
    mergeArrays(a,4,b,4,res);
    printf("Merged Array:");
    for(int i=0;i<8;i++)
    printf("%d",res[i]);
    return 0;
}