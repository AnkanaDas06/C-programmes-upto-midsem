#include <stdio.h>

int main() {
    int num1 = 15;
    int num2 = 30;
    int temp;  // Third variable

    // Display before swap
    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Swapping using 3rd variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display after swap
    printf("After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}