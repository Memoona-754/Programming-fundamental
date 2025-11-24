#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    // Assign integer
    d.i = 100;
    printf("After assigning d.i = 100:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.c = %c\n\n", d.c);

    // Assign float
    d.f = 12.5;
    printf("After assigning d.f = 12.5:\n");
    printf("d.i = %d\n", d.i);  
    printf("d.f = %f\n", d.f);
    printf("d.c = %c\n\n", d.c);

    // Assign char
    d.c = 'A';
    printf("After assigning d.c = 'A':\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.c = %c\n", d.c);

    return 0;
}
