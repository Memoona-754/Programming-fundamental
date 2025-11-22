#include<stdio.h>
int main(){
    int n=40;
    double pi=0.0;
    int sign=1,i;

    for(i=1;i<=n;i++){
        pi=pi+sign*(4.0/(2*i-1));
        sign=-sign;

        printf("%d\t%.6f\n",i,pi);
    }
     return 0;
}

#include <stdio.h>

int main() {
    double pi = 0.0;
    int sign = 1;
    int term;
    double denominator = 1.0;

    printf("Term\tApproximation of PI\n");
    printf("-------------------------------\n");

    for (term = 1; term <= 100000; term++) {
        pi += sign * (4.0 / denominator);

        // Print first 10 terms only in table
        if (term <= 10)
            printf("%d\t%.10f\n", term, pi);

        // Check when π reaches accuracy
        if (pi >= 3.14 && pi < 3.15)
            printf("First time reaching 3.14: Term %d, Value = %.10f\n", term, pi);

        if (pi >= 3.141 && pi < 3.142)
            printf("First time reaching 3.141: Term %d, Value = %.10f\n", term, pi);

        if (pi >= 3.1415 && pi < 3.1416)
            printf("First time reaching 3.1415: Term %d, Value = %.10f\n", term, pi);

        if (pi >= 3.14159 && pi < 3.14160) {
            printf("First time reaching 3.14159: Term %d, Value = %.10f\n", term, pi);
            break;
        }

        sign = -sign;           // alternate + and -
        denominator += 2;       // increment odd number
    }

    return 0;
}