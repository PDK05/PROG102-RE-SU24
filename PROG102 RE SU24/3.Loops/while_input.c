// Continuously ask for reading an int number
// print that number
// stop when inputting a zero
#include<stdio.h>
int main(){
    int n; // default n = 0
    scanf("%d", &n);  //////////////////
    while (n){
        printf("%d was inputted\n", n);
        scanf("%d", &n);
    }
    return 0;
}