#include <stdio.h>

int main(){
    float balance = 1000.0,amount;
    int choice;

    printf("1. Deposit\n2. Withdraw\n3. Check Balance\nEnter choice:");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter amount:");
        scanf("%f", &amount);
        balance +=amount;
    } else if (choice ==2){
        printf("Enter amount:");
        scanf("%f", &amount);
        balance -= amount;
    }

    printf("Final Balance: $%.2f\n",balance);
    return 0;
}