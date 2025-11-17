#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};   // to store frequency of digits 0-9

    printf("Enter a number: ");
    scanf("%d", &num);

    // Make number positive if it's negative
    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;         // increase count of this digit

        if (freq[digit] > 1) {  // digit already appeared before
            printf("Yes, a digit appears more than once.\n");
            return 0;
        }

        num = num / 10;
    }

    printf("No, all digits are unique.\n");

    return 0;
}