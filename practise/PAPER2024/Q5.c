#include <stdio.h>
#include <math.h>

// Structure definition for a 3D point
struct Point {
    float x, y, z;
};

// Function to calculate distance between two points
float distance(struct Point p1, struct Point p2) {
    return sqrt( (p2.x - p1.x)*(p2.x - p1.x) +
                 (p2.y - p1.y)*(p2.y - p1.y) +
                 (p2.z - p1.z)*(p2.z - p1.z) );
}

// Function to calculate midpoint between two points
struct Point midpoint(struct Point p1, struct Point p2) {
    struct Point mid;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    mid.z = (p1.z + p2.z) / 2.0;
    return mid;
}

int main() {
    struct Point p1, p2, mid;
    float dist;

    // Input
    printf("Enter coordinates for Point 1 (x y z): ");
    scanf("%f %f %f", &p1.x, &p1.y, &p1.z);

    printf("Enter coordinates for Point 2 (x y z): ");
    scanf("%f %f %f", &p2.x, &p2.y, &p2.z);

    // Calculations
    dist = distance(p1, p2);
    mid = midpoint(p1, p2);

    // Output
    printf("\nDistance between points = %.2f\n", dist);
    printf("Midpoint = (%.2f, %.2f, %.2f)\n", mid.x, mid.y, mid.z);

    return 0;
}
