/* Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th 
bits are on. If these bits are found to be on, then put them off. */
#include <stdio.h>

int main() {
    unsigned char num;

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    // Bit positions (starting from LSB = bit 0):
    // 4th bit → bit 3 (mask 0x08)
    // 7th bit → bit 6 (mask 0x40)

    // Check and turn OFF 4th bit
    if (num & (1 << 3)) {
        num &= ~(1 << 3);
    }

    // Check and turn OFF 7th bit
    if (num & (1 << 6)) {
        num &= ~(1 << 6);
    }

    printf("Result after turning OFF 4th and 7th bits (if ON): %u\n", num);

    return 0;
}
