#include<stdio.h>
int main() {
    int n;
    printf("Input n: "); scanf("%d", &n);
    //if (n % 2 != 0){
    if (n % 2) {
        printf("%d is an odd number.\n", n);
    } else {
        printf("%d is an even number.\n", n);
    }
    return 0;
}