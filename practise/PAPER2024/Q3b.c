#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%s", str);

    if (is_palindrome(str))
        printf("It is a palindrome.\n");
    else
        printf("It is NOT a palindrome.\n");

    return 0;
}
