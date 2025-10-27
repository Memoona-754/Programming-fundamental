#include <stdio.h>
#include <string.h>  

int main() {
    char firstName[10], lastName[10];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    strcat(firstName, " ");     
    strcat(firstName, lastName); 

    printf("Full name: %s\n", firstName);

    return 0;
}
