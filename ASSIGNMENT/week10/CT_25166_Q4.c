//Compare 2 user-input strings using strcmp and print “Equal” or “Not Equal”.

#include <stdio.h>
#include <string.h>  

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("Equal\n");
    } else {
        printf("Not Equal\n");
    }

    return 0;
}
