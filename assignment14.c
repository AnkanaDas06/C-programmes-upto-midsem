#include <stdio.h>
#include <math.h>

int main() {
    double num, floor_val, ceil_val;

    printf("Enter a number: ");
    scanf("%lf", &num);

    floor_val = floor(num);
    ceil_val = ceil(num);

    printf("Number: %.2lf\n", num);
    printf("Floor value: %.2lf\n", floor_val);
    printf("Ceiling value: %.2lf\n", ceil_val);

    return 0;
}