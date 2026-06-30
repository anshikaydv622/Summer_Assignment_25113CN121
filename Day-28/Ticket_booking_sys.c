#include <stdio.h>

int main (){
    int seats[5] = {0, 0, 0, 0, 0};
    int seatNum;
    char choice;

  do{
    printf("\nCurrent seat status:");
    for(int i=0;i<5;i++){
        if(seats[i]==0){
            printf("[%d:Available]",i+1);
        } else{
            printf("[%d:Booked]",i+1);
        }
    }

    printf("\nPick a seat (1-5):");
    scanf("%d", &seatNum);

    if(seatNum >=1 && seatNum<= 5){
       if(seats[seatNum -1]==1){
        printf("Sorry,Seat %d is already booked!\n",seatNum);
    } else {
        seats[seatNum -1]=1;
        printf("Seat %d booked successfully!\n", seatNum);
    }
}else{
    printf("Invalid seat number.\n");
}
    printf("Do you want to book another seat? (y/n):");
    scanf("%c",&choice);
} while(choice == 'y'||choice == 'Y');
  printf("\nThank you for using the booking system!\n");
    return 0;
}