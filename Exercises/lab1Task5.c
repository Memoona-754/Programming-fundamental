#include <stdio.h>

int main() {
    float height, width, totalBoards;

    printf("Enter height of the bookcase (in feet): ");
    scanf("%f", &height);

    printf("Enter width of the bookcase (in feet): ");
    scanf("%f", &width);

    totalBoards = (2 * height) + (5 * width);

    printf("\nTotal feet of 12-inch-wide boards needed: %f\n", totalBoards);

    return 0;
}
