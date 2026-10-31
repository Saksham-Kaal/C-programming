#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;
    double sum = 0.0;
    double average = 0.0;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    scanf("%d", &n);

     if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

     printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum on the fly
    }

     average = sum / n;

    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\nSum of elements: %.2f\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}