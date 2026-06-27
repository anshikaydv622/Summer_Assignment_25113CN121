#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    char dept[30];
};

int main(){
    struct Employee emp[5];
    int i;

    for(i=0;i<3;i++){
        printf("Enter ID, Name,Dept for Employee %d:", i+1);
        scanf("%d %s %s",&emp[i].id, emp[i].name,emp[i].dept);
    }
    printf("\nID\tName\tDepartment\n");
    for(i=0;i<3;i++){
        printf("%d\t%s\t%s\n", emp[i].id, emp[i].name, emp[i].dept);
    }
    return 0;
}