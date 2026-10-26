#include <stdio.h>

int main() {
    int rows, i, j, space, coef = 1;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("\nPascal's Triangle:\n");

    for (i = 0; i < rows; i++) {
        
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                
                coef = coef * (i - j + 1) / j;
            }
            
            
            printf("%4d", coef);
        }
        
        
        printf("\n");
    }

    return 0;
}