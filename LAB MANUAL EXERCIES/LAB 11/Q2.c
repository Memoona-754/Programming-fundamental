#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr) {
    int temp;

    temp = *bPtr;   // b → temp
    *bPtr = *aPtr;  // a → b
    *aPtr = *cPtr;  // c → a
    *cPtr = temp;   // temp → c
}

int main() {
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    printf("\nBefore swap: a = %d, b = %d, c = %d\n", a, b, c);

    swaped(&a, &b, &c);

    printf("\nAfter swap:  a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
