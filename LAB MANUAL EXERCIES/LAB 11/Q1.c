#include <stdio.h>

int main() {

    long value1 = 200000;
    long value2;

    // a) Define pointer to long
    long *lPtr;

    // b) Assign address of value1 to lPtr
    lPtr = &value1;

    // c) Print value pointed by lPtr
    printf("Value pointed by lPtr: %ld\n", *lPtr);

    // d) Assign the value pointed by lPtr to value2
    value2 = *lPtr;

    // e) Print value2
    printf("Value of value2: %ld\n", value2);

    // f) Print the address of value1
    printf("Address of value1: %p\n", (void*)&value1);

    // g) Print address stored in lPtr
    printf("Address stored in lPtr: %p\n",(void*)lPtr);

    // Explanation
    printf("\nYes, both addresses are the same because lPtr stores &value1.\n");

    return 0;
}
