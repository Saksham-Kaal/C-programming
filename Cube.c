#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! Please enter an integer greater than 0.\n");
        return 1;
    }

    printf("\nCubes of numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d cubed = %d\n", i, i * i * i);
    }

    return 0;
}