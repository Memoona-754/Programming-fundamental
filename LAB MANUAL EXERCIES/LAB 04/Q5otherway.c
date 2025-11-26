/*Teacher asks the student to check whether the input number is divisible by 7 or not. For checking 
the divisibility, take the last digit and double it, take the rest of the digits and subtract the 
doubled last digit repeat until the result is 7, -7 or 0. For example: 
10976 -> 1097-12 = 1085 -> 108-10 = 98 -> 9-16 = -7 
49 -> 4 - 18 = 14 -> 1 - 8 = -7  */
#include <stdio.h>

int main() {
    int number, current;

    printf("Input Number = ");
    scanf("%d", &number);

    current = number;   // We will update this again and again

    while (current != 0 && current != 7 && current != -7) {

        int last = current % 10;      // last digit
        int rest = current / 10;      // number without last digit
        int doubleLast = last * 2;    // double of last digit

        current = rest - doubleLast;  // apply rule

        // stop when rule result becomes small enough
    }

    if (current == 0 || current == 7 || current == -7)
        printf("Entered number IS divisible by 7.\n");
    else
        printf("Entered number is NOT divisible by 7.\n");

    return 0;
}
