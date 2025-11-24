

// #include <stdio.h>

// int main() {
//     double pi = 0.0;
//     int sign = 1;
//     int term;
//     double denominator = 1.0;

//     printf("Term\tApproximation of PI\n");
//     printf("-------------------------------\n");

//     for (term = 1; term <= 100000; term++) {
//         pi += sign * (4.0 / denominator);

//         // Print first 10 terms only in table
//         if (term <= 10)
//             printf("%d\t%.10f\n", term, pi);

//         // Check when π reaches accuracy
//         if (pi >= 3.14 && pi < 3.15)
//             printf("First time reaching 3.14: Term %d, Value = %.10f\n", term, pi);

//         if (pi >= 3.141 && pi < 3.142)
//             printf("First time reaching 3.141: Term %d, Value = %.10f\n", term, pi);

//         if (pi >= 3.1415 && pi < 3.1416)
//             printf("First time reaching 3.1415: Term %d, Value = %.10f\n", term, pi);

//         if (pi >= 3.14159 && pi < 3.14160) {
//             printf("First time reaching 3.14159: Term %d, Value = %.10f\n", term, pi);
//             break;
//         }

//         sign = -sign;           // alternate + and -
//         denominator += 2;       // increment odd number
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    double pi = 0.0;
    double denom = 1.0;
    int sign = 1;

    int term;

    int got314 = 0, got3141 = 0, got31415 = 0;

    printf("Term\tApproximation of PI\n");
    printf("------------------------------\n");

    for (term = 1; term <= 1000000; term++) {

        pi += sign * (4.0 / denom);

        // Print first 10 terms as a table
        if (term <= 10) {
            printf("%d\t%.10f\n", term, pi);
        }

        // First time reaching 3.14
        if (!got314 && pi >= 3.14 && pi < 3.15) {
            printf("\nFirst time reaching 3.14 at term %d: %.10f\n", term, pi);
            got314 = 1;
        }

        // First time reaching 3.141
        if (!got3141 && pi >= 3.141 && pi < 3.142) {
            printf("First time reaching 3.141 at term %d: %.10f\n", term, pi);
            got3141 = 1;
        }

        // First time reaching 3.1415
        if (!got31415 && pi >= 3.1415 && pi < 3.1416) {
            printf("First time reaching 3.1415 at term %d: %.10f\n", term, pi);
            got31415 = 1;
        }

        // First time reaching 3.14159 → stop program
        if (pi >= 3.14159 && pi < 3.14160) {
            printf("First time reaching 3.14159 at term %d: %.10f\n", term, pi);
            break;
        }

        sign = -sign;      // alternate +, -
        denom += 2;        // denominator increases by 2 each time
    }

    return 0;
}
