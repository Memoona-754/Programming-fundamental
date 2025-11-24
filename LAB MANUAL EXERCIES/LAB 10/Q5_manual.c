#include <stdio.h>

struct complex {
    float real;
    float imag;
};

// Function prototypes
struct complex readComplex();
void printComplex(struct complex c);
struct complex addComplex(struct complex c1, struct complex c2);
struct complex multiplyComplex(struct complex c1, struct complex c2);

int main() {
    struct complex c1, c2, sum, product;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("\nEnter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    product = multiplyComplex(c1, c2);

    printf("\n==============================\n");
    printf("First number: ");
    printComplex(c1);

    printf("Second number: ");
    printComplex(c2);

    printf("\nSum: ");
    printComplex(sum);

    printf("Product: ");
    printComplex(product);

    return 0;
}

// Reads a complex number
struct complex readComplex() {
    struct complex temp;
    printf("Enter real part: ");
    scanf("%f", &temp.real);
    printf("Enter imaginary part: ");
    scanf("%f", &temp.imag);
    return temp;
}

// Prints a complex number
void printComplex(struct complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Adds two complex numbers
struct complex addComplex(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Multiplies two complex numbers
struct complex multiplyComplex(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}
