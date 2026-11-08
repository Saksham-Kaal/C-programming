#include <stdio.h>

int main() {
    int n, i, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = n;
    do {
        factorial *= i;
        i--;
    } while (i > 0);
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}