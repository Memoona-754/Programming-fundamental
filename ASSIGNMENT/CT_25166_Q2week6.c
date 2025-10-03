#include<stdio.h>
int main() {
    int num1, num2;
    char operator;

    // Input two integers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Input operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Space before %c to consume any leftover newline

    // Switch based on operator
    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;

        case '-':
            printf("Result: %d\n", num1 - num2);
            break;

        case '*':
            printf("Result: %d\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", num1 / num2);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", num1 % num2);
            }
            break;

        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}