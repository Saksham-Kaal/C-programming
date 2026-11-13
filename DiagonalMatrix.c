#include <stdio.h>

int main() {
    int mat[10][10], n, i, j;
    int sum1 = 0, sum2 = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum1 = sum1 + mat[i][i];          // main diagonal
        sum2 = sum2 + mat[i][n - i - 1];  // other diagonal
    }

    printf("Main diagonal sum = %d\n", sum1);
    printf("Other diagonal sum = %d\n", sum2);

    return 0;
}