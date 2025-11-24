/*Write down a program which asks user to input his first name and last name in a separate array. 
After taking the input your program should be able to concatenate first name and last name and 
return it as full name. Count down number of characters in the full name as well. 
For example: First name: Muhammad, Second name: Ahmed, Full name: Muhammad Ahmed*/

#include <stdio.h>
int main() {
    char first[50], last[50], full[120];
    int i = 0, j = 0;

    printf("Enter your first name: ");
    scanf("%s", first);

    printf("Enter your last name: ");
    scanf("%s", last);

    while(first[i] != '\0') {
        full[i] = first[i];
        i++;
    }
    // Add space
    full[i] = ' ';
    i++;

    while(last[j] != '\0') {
        full[i] = last[j];
        i++;
        j++;
    }

    // Add null terminator
    full[i] = '\0';

    // Count characters
    int count = 0;
    while(full[count] != '\0') {
        count++;
    }

    printf("\nFull Name: %s\n", full);
    printf("Total Characters in Full Name: %d\n", count);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {

    char first[50], last[50], full[120];

    printf("Enter your first name: ");
    scanf("%s", first);

    printf("Enter your last name: ");
    scanf("%s", last);

    // Copy first name into full
    strcpy(full, first);

    // Add a space
    strcat(full, " ");

    // Add last name
    strcat(full, last);

    // Count characters
    int count = strlen(full);

    printf("\nFull Name: %s\n", full);
    printf("Total Characters in Full Name: %d\n", count);

    return 0;
}
