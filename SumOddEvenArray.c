#include <stdio.h>

int main() {
    int arr[100], n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenSum = evenSum + arr[i];
        else
            oddSum = oddSum + arr[i];
    }

    printf("Sum of even elements = %d\n", evenSum);
    printf("Sum of odd elements = %d\n", oddSum);

    return 0;
}