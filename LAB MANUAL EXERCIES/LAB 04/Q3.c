/*An online shopping store is providing discounts on the items due to the Eid. If the cost of items 
is more than 1999 it will give a discount upto 50%. If the cost of shopping is 2000 to 4000, a 20% 
discount will be applied. If the cost of shopping is 4001 to 6000, a 30% discount will be applied. 
If it's more than 6000 then 50% discount will be applied to the cost of shopping. Print the actual 
amount, saved amount and the amount after discount.*/

#include <stdio.h>

int main() {
    float cost, discountRate, discountAmount, finalAmount;

    printf("Enter total cost of items: ");
    scanf("%f", &cost);

    if (cost <= 1999) {
        discountRate = 0;}
    else if (cost >= 2000 && cost <= 4000) {
        discountRate = 20;
    }
    else if (cost >= 4001 && cost <= 6000) {
        discountRate = 30;
    }
    else {
        discountRate = 50;
    }
    discountAmount = (cost * discountRate) / 100;
    finalAmount = cost - discountAmount;

    printf("\nActual Amount: %.2f Rs", cost);
    printf("\nDiscount Applied: %.0f%%", discountRate);
    printf("\nYou Saved: %.2f Rs", discountAmount);
    printf("\nAmount after Discount: %.2f Rs\n", finalAmount);

    return 0;
}