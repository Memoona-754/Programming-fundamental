#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // For odd rows → print numbers
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        } else {
            // For even rows → print alphabets
            for (int j = 1; j <= i; j++) {
                printf("%c", 'A' + j - 1);
            }
        }
        printf("\n");
    }

    return 0;
}