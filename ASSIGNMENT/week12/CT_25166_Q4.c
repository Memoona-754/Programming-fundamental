#include <stdio.h>

// Function that takes a char pointer and prints the character it points to
void printChar(char *chPtr) {
    printf("Character: %c\n", *chPtr); // Dereference pointer to get character
}

int main() {
    char ch = 'M';
    printChar(&ch); // Pass address of variable

    return 0;
}
