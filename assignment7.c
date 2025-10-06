#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Output result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}