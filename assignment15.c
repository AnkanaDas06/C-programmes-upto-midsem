#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 1;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("No real roots.\n");
    } else {
        double sqrt_disc = sqrt(discriminant);
        double root1 = (-b + sqrt_disc) / (2 * a);
        double root2 = (-b - sqrt_disc) / (2 * a);

        int found = 0;
        if (root1 > 0) {
            printf("Positive root: %.2lf\n", root1);
            found = 1;
        }
        if (root2 > 0 && discriminant != 0) {
            printf("Positive root: %.2lf\n", root2);
            found = 1;
        }
        if (!found) {
            printf("No positive roots.\n");
        }
    }
    return 0;
}