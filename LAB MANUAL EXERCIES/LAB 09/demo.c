#include <stdio.h>

void getInput();
float roundTwoDecimal(float num);

int main() {
    getInput();
    return 0;
}

void getInput() {
    float n;
    printf("Enter a positive number with fractional part: ");
    scanf("%f", &n);

    float ans = roundTwoDecimal(n);
    printf("Rounded value: %.2f\n", ans);
}

float roundTwoDecimal(float num) {
    int temp = num * 1000;

    if (temp % 10 >= 5)
        temp = temp / 10 + 1;
    else
        temp = temp / 10;

    return temp / 100.0;
}

// void getInput() {
//     float n;
//     printf("Enter a positive number with fractional part: ");
//     scanf("%f", &n);

//     float ans = roundTwoDecimal(n);
//     printf("Rounded value: %.2f\n", ans);
// }

// int main() {

//     getInput();   // call function

//     return 0;
// }
