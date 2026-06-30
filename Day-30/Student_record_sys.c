#include <stdio.h>
int main(){
    char names[5][50];
    int rolls[5];
    float marks[5];

    for(int i=0;i<3;i++) {
        printf("Enter Name, Roll, and Marks for student %d: ",i+1);
        scanf("%s %d %f", names[i], &rolls[i], &marks[i]);
    }

    printf("\n--- Student Records ---\n");
    for(int i=0;i<3;i++) {
        printf("Name: %s | Roll: %d | Marks: %2f\n", names[i], rolls[i],marks[i]);
    }
    return 0;
}