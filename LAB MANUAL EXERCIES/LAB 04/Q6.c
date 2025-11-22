#include <stdio.h>
int main() {
    float calories, fatGrams, caloriesFromFat, percent;

    printf("Enter total calories: ");
    scanf("%f", &calories);

    printf("Enter fat grams: ");
    scanf("%f", &fatGrams);

    // Calculate calories from fat
    caloriesFromFat = fatGrams * 9;

    // Calculate percentage
    percent = (caloriesFromFat / calories) * 100;

    printf("Percentage of calories from fat: %.2f%%\n", percent);

    // Check if food is low in fat
    if (percent < 30) {
        printf("This food is low in fat.\n");
    }

    return 0;
}