#include <stdio.h>

int main() {
    int n, sum = 0;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get the array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Add each element to the sum variable as it is entered
        sum += arr[i]; 
    }

    // Display the final sum
    printf("Sum of all elements in the array = %d\n", sum);

    return 0;
}