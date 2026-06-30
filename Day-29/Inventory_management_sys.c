#include <stdio.h>

struct Item{
    int id;
    char name[30];
    int qty;
};

int main(){
    struct Item inv[10];
    int count =0, choice;

    while(1){
        printf("\n--- Inventory ---\n1. Add Item\n2. View All\n3. Exit\nEnter choice:");
        scanf("%d",&choice);
        if(choice == 3) break;

        if(choice == 1 && count<10) {
            printf("Enter ID, Name, Qty:");
            scanf("%d %s %d",&inv[count].id,inv[count].name, &inv[count].qty);
            count++;
        } else if (choice==2){
            for(int i=0;i<count;i++)
            printf("ID: %d | Name: %s | Qty: %d\n", inv[i].id, inv[i].name, inv[i].qty);
        }
    }
    return 0;
}