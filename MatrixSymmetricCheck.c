#include <stdio.h>

int main() {
    int mat[10][10], n, i, j;
    int flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                flag = 0;
            }
        }
    }

    if (flag == 1) {
        printf("Matrix is Symmetric\n");
    } else {
        printf("Matrix is not Symmetric\n");
    }

    return 0;
}