#include <stdio.h>

int main() {
    float basic, hra, ta, da, gross;

    printf("Enter your basic salary: ");
    scanf("%f", &basic);

    if (basic < 0) {
        printf("Invalid salary!\n");
    }
    else {
        hra = 0.2 * basic;
        ta = 0.1 * basic;
        da = 0.05 * basic;

        gross = basic + hra + ta + da;

        printf("The gross salary is: %.2f\n", gross);
    }

    return 0;
}
