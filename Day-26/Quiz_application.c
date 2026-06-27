#include <stdio.h>
int main(){
    int score=0,answer;

    printf("Q1:What is the size of 'int' in C(usually)?\n1. 2 bytes\n2. 4 bytes\nAnswer:");
    scanf("%d",&answer);
    if(answer == 2) score++;

    printf("Q2:Which symbol is use for comments?\n1, //\n2. #\nAnswer:");
    scanf("%d", &answer);
    if(answer ==1 ) score++;

    printf("Final Score: %d/2\n",score);
    return 0;
}