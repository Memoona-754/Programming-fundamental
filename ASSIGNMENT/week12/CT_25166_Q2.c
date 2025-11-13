#include <stdio.h>
int main() {
    
    int num = 10;
    float pi = 3.14;
    char letter = 'A';

    int *pNum = &num;
    float *pPi = &pi;
    char *pLetter = &letter;

    printf("Value of num = %d\n", *pNum);
    printf("Value of pi = %.2f\n", *pPi);
    printf("Value of letter = %c\n", *pLetter);

    return 0;
}
