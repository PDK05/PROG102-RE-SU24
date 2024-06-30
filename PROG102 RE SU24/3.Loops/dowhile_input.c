// Continuously ask for reading an int number
// print that number
// stop when inputting a zero
#include<stdio.h>
int main(){
    int n; 
    do {        
        scanf("%d", &n);
        if (n)  //////////////////////////
            printf("%d was inputted\n", n);        
    } while (n);
    return 0;
}