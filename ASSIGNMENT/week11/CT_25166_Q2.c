#include <stdio.h>

// Function that returns cube of a number
int cube(int x) {
    return x * x * x;
}

int main() {
    int num;
    
    // Asking user for a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calling cube() and printing result
    int result = cube(num);
    printf("Cube of %d is: %d\n", num, result);
    
    return 0;
}
