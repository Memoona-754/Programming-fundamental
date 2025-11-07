#include <stdio.h>
int main() {
    // Use float variables for precise calculations involving division and percentages.
    float total_cal;
    float fat_g;
    float cal_from_fat;
    float percent_fat;
    
    // A flag to control the input validation loop. 0 means invalid, 1 means valid.
    int input_valid = 0; 

    // Loop until the user provides valid numbers that pass all checks.
    while (input_valid == 0) {
        printf("--- Food Fat Percentage Calculator ---\n");
        
        // 1. Get Input
        printf("Enter total number of calories: ");
        scanf("%f", &total_cal);

        printf("Enter number of fat grams: ");
        scanf("%f", &fat_g);

        // --- VALIDATION START ---
        
        // Check 1: Calories and fat grams must be non-negative.
        if (total_cal < 0 || fat_g < 0) {
            printf("\nERROR: Calories and fat grams cannot be negative. Please try again.\n\n");
            continue; // Skip the rest of the loop and ask for input again.
        }
        
        // Calculate calories from fat (9 calories per gram of fat)
        cal_from_fat = fat_g * 9.0;

        // Check 2: Calories from fat cannot exceed total calories.
        if (cal_from_fat > total_cal) {
            printf("\nERROR: Calories from fat (%.1f) cannot be greater than total calories (%.1f).\n", cal_from_fat, total_cal);
            printf("Please check your input for total calories or fat grams.\n\n");
            continue; // Skip the rest of the loop and ask for input again.
        }
        
        // Handle the edge case where total calories is 0 (and fat is also 0).
        if (total_cal == 0) {
            // Since we passed the cal_from_fat > total_cal check, fat must also be 0.
            percent_fat = 0.0;
            input_valid = 1; // Mark input as valid.
        } else {
            // All checks passed and total_cal is > 0.
            input_valid = 1; 
        }
    }
    
    // --- CALCULATION AND OUTPUT ---
    
    // Calculate percentage if total calories is greater than 0.
    if (total_cal != 0) {
        // Formula: (Calories from fat / Total calories) * 100
        percent_fat = (cal_from_fat / total_cal) * 100.0;
    }
    // If total_cal was 0, percent_fat is already 0.0 from the validation step.

    // Display the required output .
    printf("\n========================================\n");
    printf("Calories from fat: %.1f\n", cal_from_fat);
    printf("Percentage of calories from fat: %.2f%%\n", percent_fat);
    printf("========================================\n");

    // Check and display the low-fat message.
    if (percent_fat < 30.0) {
        printf("\n=> This food is considered LOW IN FAT (less than 30%% of total calories).\n");
    }
    return 0;
}
