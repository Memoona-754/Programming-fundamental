#include <stdio.h>
int main() {
    float principal, rate, time, interest;
    printf("Enter Principal amount (100 - 1000000 Rs): ");
    scanf("%f", &principal);

    if (principal < 100 || principal > 1000000) {
        printf("Error: Principal must be between 100 and 1,000,000 Rs.\n");
        return 0;  
    }
    printf("Enter Rate of Interest (5 - 10 %%): ");
    scanf("%f", &rate);

    if (rate < 5 || rate > 10) {
        printf("Error: Rate of Interest must be between 5%% and 10%%.\n");
        return 0;
    }
    printf("Enter Time period (1 - 10 years): ");
    scanf("%f", &time);

    if (time < 1 || time > 10) {
        printf("Error: Time period must be between 1 and 10 years.\n");
        return 0;
    }
    interest = (principal * rate * time) / 100;
    printf("\nSimple Interest = %.2f Rs\n", interest);
    printf("Total Amount after %.0f years = %.2f Rs\n", time, principal + interest);

    return 0;
}
