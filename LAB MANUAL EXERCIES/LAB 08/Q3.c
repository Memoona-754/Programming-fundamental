// #include <stdio.h>
//  int main() {
//     char A[50];
//     int i;
//     printf("Enter a string: ");
//     fgets(A,50,stdin);
//     printf("%s",A);
//  }

 #include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;

    // Input two strings
    printf("Enter first string: ");
    fgets(str1,100, stdin);
    str1[strcspn(str1, "\n")] = '\0';   // Remove newline
    printf("%s\n",str1);

    printf("Enter second string: ");
    fgets(str2,100, stdin);
    str2[strcspn(str2, "\n")] = '\0';
     printf("%s\n",str1);

    // Compare using strcmp
    result = strcmp(str1, str2);

    if (result == 0) {
        printf("\nBoth strings are EQUAL.\n");
    }
    else if (result > 0) {
        printf("\nFirst string is GREATER than second string.\n");
    }
    else {
        printf("\nSecond string is GREATER than first string.\n");
    }

    return 0;
}
