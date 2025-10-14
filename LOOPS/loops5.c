#include <stdio.h>

int main() {
    int n, i;
    float term = 100;  // first term
    float r = 0.5;     // common ratio

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Geometric Progression: ");
    for (i = 1; i <= n; i++) {
        printf("%.2f ", term);
        term = term * r;  // multiply by common ratio for next term
    }

    return 0;
}