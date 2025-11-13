#include <stdio.h>
#include <limits.h>  // For INT_MAX and INT_MIN
#include <ctype.h>   // For isdigit() and isspace()

int myAtoi(char *s) {
    long result = 0;  // use long temporarily to detect overflow
    int sign = 1;
    int i = 0;

    // 1. Ignore leading whitespaces
    while (isspace(s[i])) {
        i++;
    }

    // 2. Check for sign
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // 3. Convert digits to integer
    while (isdigit(s[i])) {
        int digit = s[i] - '0';

        // Check for overflow BEFORE multiplying/adding
        if (result > (LONG_MAX - digit) / 10) {
            // Clamp result to 32-bit integer range
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    result *= sign;

    // 4. Clamp result to 32-bit range explicitly
    if (result > INT_MAX) return INT_MAX;
    if (result < INT_MIN) return INT_MIN;

    return (int)result;
}

int main() {
    char s[100];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int num = myAtoi(s);
    printf("Converted integer: %d\n", num);

    return 0;
}
