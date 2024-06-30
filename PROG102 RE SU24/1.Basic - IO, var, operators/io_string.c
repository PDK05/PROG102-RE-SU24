#include<stdio.h>
int main(){
    char name[256];
    printf("Input name: "); gets(name);
    //printf("Welcome "); puts(name); printf(" to Procedural Programming.\n");
    printf("Welcome %s to Procedural Programming.\n", name);
    return 0;
}