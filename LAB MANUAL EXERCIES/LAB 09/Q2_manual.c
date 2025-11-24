#include <stdio.h>

// Function to check recruitment position
void checkPosition(int marks) {

     printf("Enter your test marks: ");
    scanf("%d", &marks);

    int exp;

    if (marks < 50) {
        printf("\nSorry, you are not selected.\n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("\nSelected as Trainee Engineer.\n");
    }
    else if (marks >= 60) {

        // Ask for experience only if marks >= 60
        printf("Enter your experience in years: ");
        scanf("%d", &exp);

        if (marks >= 70 && exp >= 2) {
            printf("\nSelected as Associate Developer.\n");
        }
        else if (marks >= 60 && exp >= 1) {
            printf("\nSelected as Assistant Developer.\n");
        }
        else {
            printf("\nSorry, you do not meet experience criteria.\n");
        }
    }
}

int main() {
    int marks;

    checkPosition(marks);

    return 0;
}
