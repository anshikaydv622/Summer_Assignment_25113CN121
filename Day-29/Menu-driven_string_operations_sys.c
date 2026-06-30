#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int choice;

    while(1){
        printf("\n--- String Ops ---\n1. Input String\n2. Length\n3. Reverse\n4. Exit\nEnter choice:");
        scanf("%d",&choice);
        if(choice == 4) break;

        switch(choice){
            case 1:
            printf("Enter string:");
            scanf("%s", str);
            break;
            case 2:
            printf("Length: %lu\n", strlen(str));
            break;
            case 3:
            printf("Reversed:");
            for(int i=strlen(str)-1;i>=0;i--) putchar(str[i]);
            printf("\n");
            break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}