#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("Temperature Converter\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (5.0 / 9.0) * (temp - 32);
        printf("Temperature in Celsius: %.2f°C\n", converted);
    } else if (choice == 2) {
        // Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", converted);
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}
