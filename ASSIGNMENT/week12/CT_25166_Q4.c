#include <stdio.h>

void printChar(char *chPtr) {
    printf("Character: %c\n", *chPtr); 
}

int main() {
    char ch = 'M';
    printChar(&ch); 

    return 0;
}
