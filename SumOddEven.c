#include <stdio.h>
int main()
{
    int n, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        digit = n % 10;
        sum += digit;

        n /= 10;
    }

    while (n != 0);

    printf("Sum of digits: %d\n", sum);
    return 0;
}