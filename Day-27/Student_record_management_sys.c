#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float fees;
};

int main(){
    struct Student s[10];
    int n,i;

    printf("Enter number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter Roll, Name and Fees for student %d:\n",i+1);
        scanf("%d %s %f", &s[i].roll,s[i].name, &s[i].fees);
    }

    printf("\n--- Student Records ---\n");
    for(i=0;i<n;i++){
        printf("Roll: %d, Name: %s, Fees: %.2f\n", s[i].roll, s[i].name, s[i].fees);
    }
    return 0;
}