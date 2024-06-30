// Calculate nCk (Combination: n choose k)
// nCk = n! / ((k! * (n - k)!))
// using function
#include<stdio.h>
// long fact(int n); // factorial of n - prototype
// function definition
long fact(int n){    
    if (n < 0){
        printf("ERROR! n must be positive!");
        return 0;
    } else if (n == 0)
        return 1;
    else {
        long factorial = 1;
        for (int i = 1; i <= n; i++)
            factorial *= i;
        return factorial;
    }
}

void printline(){
    printf("---------------------------------\n");
}

int main(){
    int n, k;
    printf("Input n: "); scanf("%d", &n);
    printf("Input k: "); scanf("%d", &k);
    printline();
    if (k > n)
        printf("ERROR! n must be larger or equal to k\n");
    else{
        printf("%dC%d = %ld\n", 
                    n, k, fact(n)/(fact(k)*fact(n-k)));
    }
    return 0;
}

