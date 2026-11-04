#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("===Table of %d====\n", n);
    do
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;

    } while (i <= 10);
    return 0;
}