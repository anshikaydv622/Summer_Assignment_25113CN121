#include <stdio.h>
struct Salary {
    char name[50];
    float basic,hra,da,gross;
};

int main(){
    struct Salary s;
    printf("Enter Employee Name:");
    scanf("%s",s.name);
    printf("Enter Basic Salary:");
    scanf("%f", &s.basic);

    s.hra = s.basic*0.2;
    s.da=s.basic*0.5;
    s.gross=s.basic+s.hra+s.da;

    printf("\n--- Salary Slip ---\n");
    printf("Name: %s\nBasic: %.2f\nHRA: %2f\nDA: %2f\nGross Salary:%.2f\n",s.name,s.basic,s.hra,s.da,s.gross);
    return 0;
}