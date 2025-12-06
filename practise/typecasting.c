#include <stdio.h>

int main() {
    int a = 5;
    float b;

    b = (float)a;   // Casting int to float

    printf("Int value: %d\n", a);
    printf("Float value after casting: %.2f\n", b);

    return 0;
}
