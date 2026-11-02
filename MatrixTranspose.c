#include <stdio.h>

int main() {
    int mat[2][2], transpose[2][2];
    int i, j;

    printf("Enter elements of the 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element a%d%d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}