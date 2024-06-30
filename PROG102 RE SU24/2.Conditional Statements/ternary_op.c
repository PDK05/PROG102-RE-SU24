// Input two numbers a & b
// print the larger number
#include<stdio.h>
int main(){
    int a, b, larger_num;
    scanf("%d %d", &a, &b);

    // if (a > b) // condition
    //     larger_num = a; // result1
    // else
    //     larger_num = b; // result2
    /////// Ternary operator: result = (condition) ? result1 : result2
    larger_num = (a > b) ? a : b;

    printf("%d\n", larger_num);
    return 0;
}