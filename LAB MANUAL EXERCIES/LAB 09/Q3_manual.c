#include <stdio.h>

float volumeCal(int h, int a) {
    float volume;
    volume = (1.0 / 3) * a * a * h;   // a^2 * h * 1/3
    return volume;
}

void getData(int h, int a) {
    float result = volumeCal(h, a);   // call volume calculation function
    printf("\nVolume = %.2f\n", result);
}

int main() {
    int h, a;

    printf("Enter height (h): ");
    scanf("%d", &h);

    printf("Enter side length (a): ");
    scanf("%d", &a);

    getData(h, a);     // calling data function

    return 0;
}
