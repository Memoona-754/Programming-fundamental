#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
char* longestCommonPrefix(char strs[][100], int n) {
    static char prefix[100];
    int i, j;

    if (n == 0)
        return "";

    strcpy(prefix, strs[0]); // Assume first string as prefix

    for (i = 1; i < n; i++) {
        j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j])
            j++;
        prefix[j] = '\0'; // shorten prefix to the common part

        if (prefix[0] == '\0')
            return ""; // no common prefix
    }

    return prefix;
}

int main() {
    int n, i;
    char strs[10][100];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
        scanf("%s", strs[i]);

    printf("Longest Common Prefix: \"%s\"\n", longestCommonPrefix(strs, n));
    return 0;
}
