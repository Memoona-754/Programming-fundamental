#include <stdio.h>
int main() {
    char type, size;
    int total = 0, t;

    printf("Enter coffee type (B = Black, W = White): ");
    scanf(" %c", &type);

    printf("Cup size (S = Single, D = Double): ");
    scanf(" %c", &size);

    printf("\n--- Coffee Making Process ---\n");

    // ---------------- WHITE COFFEE ----------------
    if (type == 'W' || type == 'w') {

        t = 15; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Put Water .... %d mins\n", t); total += t;

        t = 15; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Sugar .... %d mins\n", t); total += t;

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;

        t = 2; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Coffee ... %d mins\n", t); total += t;

        t = 4; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Milk ..... %d mins\n", t); total += t;

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;
    }

    // ---------------- BLACK COFFEE ----------------
    else if (type == 'B' || type == 'b') {

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Put Water .... %d mins\n", t); total += t;

        t = 20; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Sugar .... %d mins\n", t); total += t;

        t = 25; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;

        t = 15; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Add Coffee ... %d mins\n", t); total += t;

        t = 25; if (size == 'D' || size == 'd') t = t + t/2;
        printf("Mix Well ..... %d mins\n", t); total += t;
    }

    else {
        printf("Invalid Coffee Type!\n");
        return 0;
    }

    printf("\nTotal Coffee Time = %d minutes\n", total);
    printf("Your coffee is ready!\n");

    return 0;
}

