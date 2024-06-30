/* Ask user to input an integer n
Then ask user to input n integers and put them into one array
Display all the input elements to the screen*/
#include<stdio.h>
int main(){
    int n; // number of elements in array
    printf("Input number of elements: ");
    scanf("%d", &n);

    int arr[n];  //array with n != 0 // 
    // input array: 
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // print array:
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    // find maximum value
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("\nMaximum value: %d\n", max);
    return 0;
}