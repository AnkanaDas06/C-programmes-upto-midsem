#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Display before swap
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;  // a now becomes 30
    b = a - b;  // b becomes 10
    a = a - b;  // a becomes 20

    // Display after swap
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}