#include <stdio.h>

int main() {
   
    char num; 

    printf("Enter an 8-bit number (0–255): ");
    scanf("%c", &num);

    printf("\nBefore changing: %c\n", num);
    if (num & 8) {       
        num = num - 8;  
    }

    if (num & 64) {      
        num = num - 64;  
    }
    printf("After changing: %c\n", num);
    return 0;
}
