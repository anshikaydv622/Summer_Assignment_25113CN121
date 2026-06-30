#include <stdio.h>
int main(){
    char empName[5][50];
    int empID[5];
    float salary[5];

    for(int i=0;i<3;i++){
        printf("Enter Employee Name,ID,and Salary:");
        scanf("%s %d %f", empName[i],&empID[i], &salary[i]);
    }

    printf("\n--- Employee List ---\n");
    for(int i=0;i<3;i++){
        printf("ID: %d | Nmae: %s | Salary: $%.2f\n", empID[i],empName[i],salary[i]);
    }
    return 0;
}