#include<stdio.h>
int main(){
    // factorial of n
    int n;
    long fact; // long integer
    printf("Input n: ");
    scanf("%d", &n);

    if (n < 0){
        printf("ERROR! n must be positive!");
    } 
    else if (n == 0)
        printf("Factorial = 1\n");
    else {
        fact = 1;                       // initialization
        for (int i = 1; i <= n; i++){
            fact *= i;                  // multiplication
        }
        printf("Factorial: %ld", fact); // print long integer
    }

    return 0;
}