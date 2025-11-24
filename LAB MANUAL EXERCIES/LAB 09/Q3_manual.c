#include <stdio.h>

float volumeCal(int h, int a) {
    return (a * a * h) / 3.0;
}

void getData(int h, int a) {
    float V;

    printf("Enter height: ");
    scanf("%d", &h);

    printf("Enter base: ");
    scanf("%d", &a);

    V = volumeCal(h, a);   // calling from inside getData()

    printf("Volume = %.2f\n", V);
}

int main() {
    int h, a;

    getData(h, a);   // calling the first function

    return 0;
}