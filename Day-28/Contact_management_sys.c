#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main (){
    struct Contact c;
    printf("Enter Contact Name:");
    scanf("%s",c.name);
    printf("Enter Phone Number:");
    scanf("%s", c.phone);

    printf("\n--- Saved Contact ---\nName: %s\nPhone: %s\n", c.name, c.phone);
    return 0;
}