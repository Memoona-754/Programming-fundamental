#include <stdio.h>
int main() {
    int n, last_digit, rest_of_digits;

    printf("Enter an integer to check for divisibility by 7: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (n < 0) {
        n = -n;
    }
    int original_n = n; 
    if (original_n == 0) {
        printf("0 is divisible by 7.\n");
        return 0;
    }
    while (n > 99) { 
        last_digit = n % 10;
        rest_of_digits = n / 10;
        n = rest_of_digits - (last_digit * 2);
        if (n < 0) {
            n = -n;
        }
        printf("Next step: %d\n", n);
    }
    printf("Final check number: %d\n", n);
    if (n % 7 == 0) {
        printf("%d is divisible by 7.\n", original_n);
    } else {
        printf("%d is NOT divisible by 7.\n", original_n);
    }

    return 0;
}