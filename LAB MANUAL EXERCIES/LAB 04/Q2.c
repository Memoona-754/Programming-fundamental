/* Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th 
bits are on. If these bits are found to be on, then put them off. */
#include <stdio.h>
int main() {
    unsigned char num;   // 8-bit number

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    // Masks for 4th and 7th bits
    unsigned char bit4 = 1 << 3;  // 4th bit (bit 3)
    unsigned char bit7 = 1 << 6;  // 7th bit (bit 6)

    printf("Original number = %u\n", num);

    // Check and turn off 4th bit if ON
    if (num & bit4) {
        printf("4th bit is ON → Turning it OFF...\n");
        num = num & (~bit4);
    }

    // Check and turn off 7th bit if ON
    if (num & bit7) {
        printf("7th bit is ON → Turning it OFF...\n");
        num = num & (~bit7);
    }

    printf("Updated number = %u\n", num);

    return 0;
}
