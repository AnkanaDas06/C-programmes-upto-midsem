#include <stdio.h>

int main() {
    float num;
    
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num >= 0) {
        if ((int)num == num)
            printf("%.2f is a whole number.\n", num);
        else
            printf("%.2f is not a whole number (it's a decimal).\n", num);
    } else {
        printf("%.2f is not a whole number (it's negative).\n", num);
    }

    return 0;
}
