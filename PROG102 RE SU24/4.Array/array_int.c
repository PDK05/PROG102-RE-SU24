/* Ask user to input 5 integers and put them into one array
Display all the input elements to the screen*/
#include<stdio.h>
int main(){
    int n[5];
    // Read array
    for (int i =0 ; i < 5; i++){
        printf("Input n[%d]: ", i);
        scanf("%d", &n[i]);
    }
    // TODO: print array
    for (int i =0 ; i < 5; i++)
        printf("%d\n", n[i]);
    
    printf("Array length: %d\n", sizeof(n)/sizeof(int));
    return 0;
}