#include <stdio.h>
int main(){
        int a[]={1,2,3,4},b[]={3,4,5,6},n1=4,n2=4;
        int i,j,flag;

        printf("Union:");
        for(i=0;i<n1;i++)
        printf("%d",a[i]);

        for(i=0;i<n2;i++){
            flag=0;
            for(j=0;j<n1;j++){
                if(b[i]==a[j]){
                    flag=1;
                    break;
                }
            }
            if(!flag) printf("%d",b[i]);

        }
        return 0;
}