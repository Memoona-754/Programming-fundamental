#include <stdio.h>
int main() {

    float principal, rate, interest;
    int time;

    printf("Principal must be between 100 and 1,000,000 Rs.\n");
    printf("Rate of interest must be between 5%% and 10%%.\n");
    printf("Time period must be between 1 and 10 years.\n\n");

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%d", &time);

    interest = (principal * rate * time) / 100.0;

    printf("\nSimple Interest = %.2f Rs.\n", interest);

    return 0;
}
