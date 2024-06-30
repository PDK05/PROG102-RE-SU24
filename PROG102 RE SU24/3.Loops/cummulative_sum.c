#include<stdio.h>
int main(){
    int n, sum;
    printf("Input n: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("ERROR! n must be positive!");
    } else {
        sum = 0;
        // TODO: sum calculation
        for (int i = 1; i <= n; i++){
            sum += i;
        }
        printf("Cummulative Sum: %d", sum);
    }
    return 0;
}