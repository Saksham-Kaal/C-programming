#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("=== Temperature Conversion Program ===\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            
            converted = (temp * 9.0 / 5.0) + 32.0;
            printf("%.2f°C is equal to %.2f°F\n", temp, converted);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            
            converted = (temp - 32.0) * 5.0 / 9.0;
            printf("%.2f°F is equal to %.2f°C\n", temp, converted);
            break;

        default:
            printf("Invalid choice! Please run the program again and select 1 or 2.\n");
    }

    return 0;
}