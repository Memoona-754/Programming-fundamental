#include <stdio.h>

struct phone {
    int area;
    int exchange;
    int number;
};

int main() {
    struct phone myNum = {212, 767, 8900};   // initialized structure
    struct phone userNum;                     // user input structure

    printf("Enter area code: ");
    scanf("%d", &userNum.area);

    printf("Enter exchange: ");
    scanf("%d", &userNum.exchange);

    printf("Enter number: ");
    scanf("%d", &userNum.number);

    // Display both numbers
    printf("\nMy number is (%d) %d-%d\n", myNum.area, myNum.exchange, myNum.number);
    printf("Your number is (%d) %d-%d\n", userNum.area, userNum.exchange, userNum.number);

    return 0;
}
