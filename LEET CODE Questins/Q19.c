#include <stdio.h>
#include <string.h>

// Function to perform zigzag conversion
void convert(char s[], int numRows, char result[]) {
    if (numRows == 1) {  // Special case: only one row
        strcpy(result, s);
        return;
    }

    int len = strlen(s);
    int index = 0;

    for (int row = 0; row < numRows; row++) {
        for (int i = row; i < len; i += 2 * (numRows - 1)) {
            result[index++] = s[i];

            // For middle rows, add the diagonal element
            int diag = i + 2 * (numRows - row - 1);
            if (row != 0 && row != numRows - 1 && diag < len)
                result[index++] = s[diag];
        }
    }

    result[index] = '\0';  // Null-terminate the result
}

int main() {
    char s[100], result[100];
    int numRows;

    printf("Enter a string: ");
    scanf("%s", s);
    printf("Enter number of rows: ");
    scanf("%d", &numRows);

    convert(s, numRows, result);

    printf("Zigzag Conversion: %s\n", result);
    return 0;
}
