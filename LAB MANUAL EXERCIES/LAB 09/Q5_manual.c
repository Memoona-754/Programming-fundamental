#include <stdio.h>

// Function to display instructions
void instructions() {
    printf("This program calculates the total cost of a house over 5 years.\n");
    printf("Total Cost = Initial Cost + (Fuel × 5 years) + (Tax × 5 years)\n");
    printf("Tax per year = Initial Cost × Tax Rate\n\n");
}

// Function to calculate and print total cost
void calculateCost(float initial, float fuel, float taxRate) {
    float taxOneYear = initial * taxRate;
    float total = initial + (fuel * 5) + (taxOneYear * 5);

    printf("Initial Cost: %.2f\n", initial);
    printf("Annual Fuel Cost: %.2f\n", fuel);
    printf("Tax Rate: %.3f\n", taxRate);
    printf("Total Cost After 5 Years = %.2f\n\n", total);
}

int main() {
    // Call instructions function
    instructions();

    // Dataset 1
    calculateCost(67000, 2300, 0.025);

    // Dataset 2
    calculateCost(62000, 2500, 0.025);

    // Dataset 3
    calculateCost(75000, 1850, 0.020);

    return 0;
}
