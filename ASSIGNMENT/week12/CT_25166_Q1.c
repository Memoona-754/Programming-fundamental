#include <stdio.h>
int sumNatural(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumNatural(n - 1);
}

int main() {
    int n = 5;
    int sum = sumNatural(n);

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
