#include <stdio.h>

int main() {
    int unit, category;
    float bill;

    printf("Enter your units: ");
    scanf("%d", &unit);

    if (unit < 0)
        category = 0;
    else if (unit <= 100)
        category = 1;
    else if (unit <= 200)
        category = 2;
    else
        category = 3;

    switch (category) {
        case 0:
            printf("Invalid unit!\n");
            break;

        case 1:
            bill = unit * 5;
            printf("The bill is Rs 5/unit = %.2f\n", bill);
            break;

        case 2:
            bill = unit * 7;
            printf("The bill is Rs 7/unit = %.2f\n", bill);
            break;

        case 3:
            bill = unit * 10;
            printf("The bill is Rs 10/unit = %.2f\n", bill);
            break;

        default:
            printf("Invalid input!\n");
    }

    return 0;
}
