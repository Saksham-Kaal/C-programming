#include <stdio.h>

int main() {
    int mat1[2][2], mat2[2][2], sum[2][2];
    int i, j;

    printf("Enter elements of 1st 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element a%d%d: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of 2nd 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element b%d%d: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nSum of the two matrices is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}