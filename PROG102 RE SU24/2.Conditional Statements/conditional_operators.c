#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Ask the user to input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Ask the user to input an arithmetic op
    printf("Enter an op (+, -, *, /): ");
    scanf(" %c", &op);  // The space before %c is important to consume any newline characters left in the buffer

    // Perform the calculation based on the op
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
