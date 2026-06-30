#include <stdio.h>
int main(){
    char titles[5][50],authors[5][50];
    int bookIDs[5];

    for(int i=0;i<3;i++){
        printf("Enter Book Title, Author,and ID:");
        scanf("%s %s %d", titles[i],authors[i],&bookIDs[i]);
    }
    printf("\n--- Library Books ---\n");
    for(int i=0;i<3;i++){
        printf("ID : %d | Title: %s | Author: %s\n", bookIDs[i], titles[i],authors[i]);
    }
    return 0;
}