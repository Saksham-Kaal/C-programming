#include <stdio.h>

int main() {
    int n, i;
    
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int largest = arr[0];
    int smallest = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    
    printf("\nResults:\n");
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}