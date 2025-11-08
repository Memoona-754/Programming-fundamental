#include <stdio.h>
int main() {
    char type, size;

    printf("Enter coffee type (B for Black, W for White): ");
    scanf(" %c", &type);

    printf("Enter coffee size (M for Manual, D for Double): ");
    scanf(" %c", &size);

    printf("\n--- Coffee Machine Instructions ---\n");

    if (type == 'W' || type == 'w') {
        float w1 = 15, w2 = 5, w3 = 20, w4 = 4, w5 = 8, w6 = 20;

        // increase time by 50% if size is double
        if (size == 'D' || size == 'd') {
            w1 *= 1.5;
            w2 *= 1.5;
            w3 *= 1.5;
            w4 *= 1.5;
            w5 *= 1.5;
            w6 *= 1.5;
        }

        printf("Put Water : %.1f mins\n", w1);
        printf("Add Sugar : %.1f mins\n", w2);
        printf("Mix Well  : %.1f mins\n", w3);
        printf("Add Coffee: %.1f mins\n", w4);
        printf("Add Milk  : %.1f mins\n", w5);
        printf("Mix Well  : %.1f mins\n", w6);
    }

    else if (type == 'B' || type == 'b') {
        float b1 = 20, b2 = 20, b3 = 25, b4 = 15, b5 = 25;

        if (size == 'D' || size == 'd') {
            b1 *= 1.5;
            b2 *= 1.5;
            b3 *= 1.5;
            b4 *= 1.5;
            b5 *= 1.5;
        }

        printf("Put Water : %.1f mins\n", b1);
        printf("Add Sugar : %.1f mins\n", b2);
        printf("Mix Well  : %.1f mins\n", b3);
        printf("Add Coffee: %.1f mins\n", b4);
        printf("Mix Well  : %.1f mins\n", b5);
    }

    else {
        printf("Invalid coffee type! Choose B or W.\n");
    }

    return 0;
}