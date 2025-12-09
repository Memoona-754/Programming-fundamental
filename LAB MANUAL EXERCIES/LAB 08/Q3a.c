#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(s1);  // simple input

    printf("Enter second string: ");
    gets(s2);

    while (1) {
        // if both end at same time → equal
        if (s1[i] == '\0' && s2[i] == '\0') {
            printf("\nStrings are EQUAL.\n");
            break;
        }

        // if first string ends → second is greater
        if (s1[i] == '\0') {
            printf("\nStrings are NOT equal.\nSecond string is GREATER.\n");
            break;
        }

        // if second string ends → first is greater
        if (s2[i] == '\0') {
            printf("\nStrings are NOT equal.\nFirst string is GREATER.\n");
            break;
        }

        // compare characters
        if (s1[i] > s2[i]) {
            printf("\nStrings are NOT equal.\nFirst string is GREATER.\n");
            break;
        }
        if (s1[i] < s2[i]) {
            printf("\nStrings are NOT equal.\nSecond string is GREATER.\n");
            break;
        }

        i++; // move to next character
    }

    return 0;
}
