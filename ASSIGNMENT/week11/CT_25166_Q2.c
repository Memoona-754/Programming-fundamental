#include <stdio.h>
int cube(int x) {
    return x * x * x;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = cube(num);
    printf("Cube of %d is: %d\n", num, result);
    
    return 0;
}
