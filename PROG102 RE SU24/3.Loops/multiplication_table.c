#include<stdio.h>
int main(){
    // int n;
    // printf("Input n: ");
    // scanf("%d", &n);
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            printf("%d x %d = %d\t", i, j, i*j); 
            // Không xuống dòng ở đây (chú ý \n), in thẳng hàng (chú ý \t)
        }
        // Đến đây mới xuống dòng
        printf("\n");
    }
    return 0;
}