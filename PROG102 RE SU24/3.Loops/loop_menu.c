#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice;
    while(1) {
        printf("==================\n");
        printf("1. Enter Student Info\n");
        printf("2. Print Student List\n");
        printf("3. Find Highest Grade\n");
        printf("4. Exit\n");
        printf("==================\n");
        printf("Enter your choice: "); 
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("First Function was selected!\n\n");
                break;
            case 2:
                printf("Second Function was selected!\n\n");
                break;
            case 3:
                printf("Third Function was selected!\n\n");
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("INVALID CHOICE!\n\n");
                break;
        }
    }

    return 0;
}