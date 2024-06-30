#include<stdio.h>
int main(){
    float grade;
    printf("Input grade: "); scanf("%f", &grade);
    if  (grade >= 0 && grade <= 100){
        if (grade < 40)
            printf("Fail\n");
        else if (grade < 50)
            printf("3rd Class\n");
        else if (grade < 60)
            printf("2nd Class 2nd Division\n");
        else if (grade < 70)
            printf("2nd Class 1st Division\n");
        else 
            printf("First Class");
    } else 
        printf("INVALID GRADE!\n");    
    return 0;
}