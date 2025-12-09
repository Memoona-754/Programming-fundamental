#include <stdio.h>

int main() {
    int a = 1, b = 1, c;
    int sum3 = 0, sum5 = 0, sum7 = 0;

    printf("Fibonacci series up to 1000:\n");
    printf("%d %d ", a, b);

    while (1) {
        c = a + b;
        if (c > 1000)
            break;

        printf("%d ", c);

        if (c % 3 == 0)
            sum3 += c;

        if (c % 5 == 0)
            sum5 += c;

        if (c % 7 == 0)
            sum7 += c;

        a = b;
        b = c;
    }

    printf("\n\nSum divisible by 3: %d ", sum3);
    printf("\nSum divisible by 5: %d ", sum5);
    printf("\nSum divisible by 7: %d ", sum7);

    return 0;
}
