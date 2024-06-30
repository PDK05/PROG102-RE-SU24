#include<stdio.h>

int main(){
    int a, b;
    printf("Input a: "); scanf("%d", &a);
    printf("Input b: "); scanf("%d", &b);

    printf("a = %d\nb = %d\n",a, b);  // \n: xuống dòng
    printf("a + b = %d\n", a+b);    
    printf("a - b = %d\n", a-b); 
    printf("a * b = %d\n", a*b); 
    printf("a / b = %f\n", (float)a/(float)b); // type casting - ép kiểu int-->float
    return 0;
}