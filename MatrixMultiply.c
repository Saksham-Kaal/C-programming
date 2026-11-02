#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns for the 1st matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("\nError! Matrix multiplication is not possible.\n");
        printf("Reason: Columns of 1st matrix (%d) must be equal to Rows of 2nd matrix (%d).\n", c1, r2);
        return 0; 
    }

    int mat1[10][10], mat2[10][10], result[10][10];

    printf("\nEnter elements of the 1st matrix (%dx%d):\n", r1, c1);
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of the 2nd matrix (%dx%d):\n", r2, c2);
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nResultant Matrix after Multiplication (%dx%d):\n", r1, c2);
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}