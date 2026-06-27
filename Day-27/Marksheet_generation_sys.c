#include <stdio.h>
int main(){
    char name[50];
    int m1,m2,m3,total;
    float per;

    printf("Enter Student Name:");
    scanf("%s",name);
    printf("Enter marks for 3 subjects:");
    scanf("%d %d %d",&m1,&m2,&m3);

    total=m1+m2+m3;
    per=total/3.0;

    printf("\n------- MARKSHEET -------\n");
    printf("Name: %s\nTotal Marks:%d\nPercentage: %.2f%%\n",name,total,per);
    printf("Result: %s\n",(per>=40)? "PASS": "FAIL");
    printf("-----------------------\n");

    return 0;
}