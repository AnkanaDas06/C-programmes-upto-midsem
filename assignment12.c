#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest, amount;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Compound Interest = %.2lf\n", compound_interest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}