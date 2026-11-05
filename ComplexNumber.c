#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    struct Complex num1, num2, result;

    printf("Enter real and imaginary parts of the first complex number:\n");
    printf("Real part: ");
    if (scanf("%f", &num1.real) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Imaginary part: ");
    if (scanf("%f", &num1.imag) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("\nEnter real and imaginary parts of the second complex number:\n");
    printf("Real part: ");
    if (scanf("%f", &num2.real) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Imaginary part: ");
    if (scanf("%f", &num2.imag) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    result = addComplex(num1, num2);

    printf("\n---------------------------------\n");
    printf("First Complex Number  : %.2f + %.2fi\n", num1.real, num1.imag);
    printf("Second Complex Number : %.2f + %.2fi\n", num2.real, num2.imag);
    printf("---------------------------------\n");
    printf("Sum                   : %.2f + %.2fi\n", result.real, result.imag);
    printf("---------------------------------\n");

    return 0;
}