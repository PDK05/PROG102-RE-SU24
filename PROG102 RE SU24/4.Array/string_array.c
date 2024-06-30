/*Ask user to input 5 names
Store them in an array
Then print them out to the screen*/
#include<stdio.h>
int main(){
    char sNames[5][128];
    for (int i = 0; i < 5; i++){
        printf("Input name %d: ", i);
        gets(sNames[i]);
    }
    // TODO: print all names:
    for (int i = 0; i < 5; i++){
        printf("%s\n", sNames[i]);
    }


    return 0;
}