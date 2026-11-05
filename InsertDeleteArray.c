#include <stdio.h>

#define MAX 100 

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int n, int element, int pos, int capacity) {
    
    if (n >= capacity) {
        printf("Error: Array is full! Cannot insert.\n");
        return n;
    }
    
    if (pos < 0 || pos > n) {
        printf("Error: Invalid position! Position must be between 0 and %d.\n", n);
        return n;
    }

    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;
    return n + 1;
}

int deleteElement(int arr[], int n, int pos) {
    
    if (n <= 0) {
        printf("Error: Array is empty! Cannot delete.\n");
        return n;
    }
    
    if (pos < 0 || pos >= n) {
        printf("Error: Invalid position! Position must be between 0 and %d.\n", n - 1);
        return n;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int main() {
    int arr[MAX];
    int n, pos, element;

    printf("Enter number of elements (max %d): ", MAX);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    printArray(arr, n);

    printf("\n--- Insertion Operation ---\n");
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter 0-indexed position to insert at: ");
    scanf("%d", &pos);

    n = insertElement(arr, n, element, pos, MAX);
    printf("Array after insertion: ");
    printArray(arr, n);

    printf("\n--- Deletion Operation ---\n");
    printf("Enter 0-indexed position to delete from: ");
    scanf("%d", &pos);

    n = deleteElement(arr, n, pos);
    printf("Array after deletion: ");
    printArray(arr, n);

    return 0;
}