#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent, temp_exp;

    printf("Enter base number: ");
    if (scanf("%lf", &base) != 1) {
        printf("Invalid base input!\n");
        return 1;
    }

    printf("Enter exponent (integer): ");
    if (scanf("%d", &exponent) != 1) {
        printf("Invalid exponent input!\n");
        return 1;
    }

    temp_exp = (exponent < 0) ? -exponent : exponent;

    for (int i = 0; i < temp_exp; i++) {
        result *= base;
    }

    if (exponent < 0) {
        if (base == 0) {
            printf("Error: Division by zero (0 to a negative power is undefined).\n");
            return 1;
        }
        result = 1.0 / result;
    }

    printf("\n---------------------------------\n");
    printf("Result: %.2lf ^ %d = %.5lf\n", base, exponent, result);
    printf("---------------------------------\n");

    return 0;
}