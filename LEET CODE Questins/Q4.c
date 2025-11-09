#include <stdio.h>

int main() {
    char s[100];
    char stack[100];
    int top = -1;
    int i;

    printf("Enter a string of brackets: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        // Push opening brackets
        if(ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        else {
            // If stack empty, invalid
            if(top == -1) {
                printf("Invalid string\n");
                return 0;
            }

            // Check matching pairs
            char topChar = stack[top];

            if((ch == ')' && topChar == '(') ||
               (ch == '}' && topChar == '{') ||
               (ch == ']' && topChar == '[')) {
                top--; // pop
            }
            else {
                printf("Invalid string\n");
                return 0;
            }
        }
    }

    // If stack empty, string is valid
    if(top == -1)
        printf("Valid string\n");
    else
        printf("Invalid string\n");

    return 0;
}

