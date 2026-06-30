#include <stdio.h>
void displayInventory(char items[][50],int counts[],int n){
    printf("\n--- Current Inventory ---\n");
    for(int i=0;i<n;i++){
        printf("Item: %s | Quantity: %d\n",items[i],counts[i]);
    }
}
int main(){
    char itemNames[3][50];
    int itemQuantities[3];

    for(int i=0;i<3;i++){
        printf("Enter Item Name and Quantity: ");
        scanf("%s %d", itemNames[i],&itemQuantities[i]);
    }

    displayInventory(itemNames, itemQuantities, 3);

    return 0;
}