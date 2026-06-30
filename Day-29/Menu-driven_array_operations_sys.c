#include <stdio.h>
int main(){
int arr[100], n=0,choice,i;

while(1){
    printf("\n--- Array Ops ---\n1. Insert\n2. Display\n3. Sum\n4. Exit\nEnter choice:");
    scanf("%d", &choice);
    if(choice==4) break;

    switch(choice){
        case 1:
        printf("Enter number of elements:");
        scanf("%d", &n);
        for(i=0;i<n;i++) scanf("%d", &arr[i]);
        break;
        case 2:
        for(i=0;i<n;i++)printf("%d", arr[i]);
        printf("\n");
        break;
        case 3: {
            int sum=0;
            for(i=0;i<n;i++) sum +=arr[i];
            printf("Sum: %d\n", sum);
            break;
        }
        default:printf("Invalid choice!\n");
    }
}
return 0;
}