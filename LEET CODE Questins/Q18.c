#include <stdio.h>
#include <string.h>

// Function to expand around center and find palindrome length
int expandAroundCenter(char s[], int left, int right, int *start, int *maxLen) {
    int len = strlen(s);
    while (left >= 0 && right < len && s[left] == s[right]) {
        left--;
        right++;
    }
    int currLen = right - left - 1;  // length of palindrome
    if (currLen > *maxLen) {
        *maxLen = currLen;
        *start = left + 1;
    }
    return *maxLen;
}

// Function to find longest palindromic substring
void longestPalindrome(char s[], char result[]) {
    int len = strlen(s);
    if (len == 0) {
        result[0] = '\0';
        return;
    }

    int start = 0, maxLen = 1;

    for (int i = 0; i < len; i++) {
        // Odd-length palindrome
        expandAroundCenter(s, i, i, &start, &maxLen);
        // Even-length palindrome
        expandAroundCenter(s, i, i + 1, &start, &maxLen);
    }

    // Copy longest palindrome into result
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';
}

int main() {
    char s[100], result[100];

    printf("Enter a string: ");
    scanf("%s", s);

    longestPalindrome(s, result);

    printf("Longest Palindromic Substring: %s\n", result);
    return 0;
}
