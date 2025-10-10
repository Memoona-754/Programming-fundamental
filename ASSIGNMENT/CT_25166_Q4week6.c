#include <stdio.h>

int main() {
    int program, year;

    printf("Select Program Type:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    printf("Enter your choice: ");
    scanf("%d", &program);

    switch (program) {
        case 1: // Computer Science
            printf("Select Year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Enter your choice: ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Computer Science - First Year Courses:\n");
                    printf(" - Introduction to Programming\n");
                    printf(" - Mathematics I\n");
                    printf(" - Digital Logic\n");
                    break;
                case 2:
                    printf("Computer Science - Second Year Courses:\n");
                    printf(" - Data Structures\n");
                    printf(" - Computer Organization\n");
                    printf(" - Discrete Mathematics\n");
                    break;
                default:
                    printf("Invalid year selection.\n");
            }
            break;

        case 2: // Electrical Engineering
            printf("Select Year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Enter your choice: ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Electrical Engineering - First Year Courses:\n");
                    printf(" - Basic Electrical Engineering\n");
                    printf(" - Engineering Mathematics I\n");
                    printf(" - Physics\n");
                    break;
                case 2:
                    printf("Electrical Engineering - Second Year Courses:\n");
                    printf(" - Circuit Theory\n");
                    printf(" - Electromagnetics\n");
                    printf(" - Analog Electronics\n");
                    break;
                default:
                    printf("Invalid year selection.\n");
            }
            break;

        default:
            printf("Invalid program selection.\n");
    }

    return 0;
}
