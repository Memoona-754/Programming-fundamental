#include <stdio.h>

int value(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    char roman[50];
    int i, total = 0;

    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    for(i = 0; roman[i] != '\0'; i++) {
        int current = value(roman[i]);
        int next = value(roman[i + 1]);

        if(current < next) {
            total = total + (next - current);
            i++;    // skip next character
        }
        else {
            total = total + current;
        }
    }

    printf("Integer value: %d\n", total);

    return 0;
}
