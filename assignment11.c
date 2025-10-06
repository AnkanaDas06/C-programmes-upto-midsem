#include <stdio.h>

int main() {
    int num, last_digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    last_digit = num % 10;
    if (last_digit < 0) {
        last_digit = -last_digit; // Handle negative numbers
    }

    printf("The last digit of %d is %d\n", num, last_digit);

    return 0;
}