#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char s[]) {
    int lastIndex[256];   // stores last index of every character
    int start = 0, maxLen = 0;

    // initialize all indexes to -1
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        // If the character was seen before, move start
        if (lastIndex[ch] >= start)
            start = lastIndex[ch] + 1;

        // Update last index of current character
        lastIndex[ch] = i;

        // Calculate current window length
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    return maxLen;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    printf("Length of longest substring without repeating characters: %d\n",
           lengthOfLongestSubstring(s));

    return 0;
}
