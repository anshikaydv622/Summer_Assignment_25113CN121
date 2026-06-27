#include <stdio.h>

int main(){
    float balance =1000.0,amount;
    int choice;

    printf("1. Check Balance\n2. Deposit\n3. Withdraw\nChoice:");
    scanf("%d", &choice);

    switch(choice){
        case 1: printf("Balance: $%.2f\n", balance); break;
        case 2:
        printf("Enter deposit amount:");
        scanf("%f",&amount);
        balance +=amount;
        printf("New Balance: $%.2f\n",balance);
        break;
        case 3:
        printf("Enter withdrawl amount:");
        scanf("%f", &amount);
        if(amount <= balance){
            balance -=amount;
            printf("Withdrawl successful. Remaining: $%.2f\n",balance);
        } else printf("Insufficient funds!\n");
        break;
        default: printf("Invalid choice.\n");
    }
    return 0;
}