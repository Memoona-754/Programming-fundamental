#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[120];
    int i, len;

    // Input first and last name
    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    // Combine using string functions
    strcpy(full, first);   // Copy first name into full
    strcat(full, " ");     // Add space
    strcat(full, last);    // Add last name

    // Find length
    len = strlen(full);

    // Print backward
    printf("\nFull name backwards: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", full[i]);
    }

    printf("\n");

    return 0;
}
