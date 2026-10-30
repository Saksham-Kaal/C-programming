#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }
    return 1; // Prime number
}

int main() {
    int choice;

    printf("=== Prime Number Utility ===\n");
    printf("1. Check if a single number is prime\n");
    printf("2. Find all prime numbers in a given range\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int n;
        printf("Enter an integer to check: ");
        scanf("%d", &n);

        if (isPrime(n)) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is NOT a prime number.\n", n);
        }

    } else if (choice == 2) {
        int start, end, i;
        printf("Enter the starting range: ");
        scanf("%d", &start);
        printf("Enter the ending range: ");
        scanf("%d", &end);

        if (start > end) {
            printf("Invalid range! Starting number cannot be greater than the ending number.\n");
            return 1;
        }

        printf("Prime numbers between %d and %d are:\n", start, end);
        int found = 0;
        
        for (i = start; i <= end; i++) {
            if (isPrime(i)) {
                printf("%d ", i);
                found = 1;
            }
        }

        if (!found) {
            printf("No prime numbers found in this range.");
        }
        printf("\n");

    } else {
        printf("Invalid choice! Please restart the program and select 1 or 2.\n");
    }

    return 0;
}