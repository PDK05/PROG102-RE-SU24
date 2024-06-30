/* Continuously ask for inputting an int
- if positive --> print that number
- if negative --> ignore
- if zero --> stop */
#include<stdio.h>
int main(){
    int n;
    while (1) {
        scanf("%d", &n);
        if (n > 0)
            printf("%d was inputted\n", n);
        else if (n < 0)
            continue;
        else //// n == 0
            break;
    }
    return 0;
}
