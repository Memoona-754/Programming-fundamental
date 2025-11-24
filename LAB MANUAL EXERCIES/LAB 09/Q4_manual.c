#include <stdio.h>

float roundTwoDecimal(float num) {
    int temp = num * 1000;   // move 3 decimals

    // Check 3rd decimal digit
    if (temp % 10 >= 5)
        temp = temp / 10 + 1;   // round up
    else
        temp = temp / 10;       // round down

    return temp / 100.0;        // convert to 2 decimals
}

void getInput() {
    float n;
    printf("Enter a positive number with fractional part: ");
    scanf("%f", &n);

    float ans = roundTwoDecimal(n);
    printf("Rounded value: %.2f\n", ans);
}

int main() {

    getInput();   // call function

    return 0;
}
