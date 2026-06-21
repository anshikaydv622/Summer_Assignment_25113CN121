#include <stdio.h>
int main(){
    int r,c,a[10][10],transpose[10][10];
    printf("Enter rows and columns:");
    scanf("%d %d",&r,&c);

    printf("Enter matrix elements:\n");
    for(int i=0;i<r;++i)
    for(int j=0;j<c;++j)
    scanf("%d",&a[i][j]);

    for(int i=0;i<r;++i)
    for(int j=0;j<c;++j)
    transpose[j][i]=a[i][j];

    printf("Transpose of Matrix:\n");
    for(int i=0;i<c;++i){
        for(int j=0;j<r;++j){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}