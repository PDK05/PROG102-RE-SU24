#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);

    if (a){
        float delta = b*b - 4*a*c;
        if (delta < 0){
            printf("No solution.\n");
        } else if (delta == 0){
                printf("Double root: x = %f\n", -b/(2*a));
        } else {
            printf("Two separated roots: \n x1 = %f\n x2 = %f\n", 
                                        (-b + sqrt(delta))/(2*a), 
                                        (-b - sqrt(delta))/(2*a));
        }
    } else {
        printf("ERROR! a must be none zero!\n");
    }
    return 0;
}