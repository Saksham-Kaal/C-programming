#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int product=1;
    while (n > 0)
    {

        int digit = n % 10;
        product *= digit;
        n = n / 10;

    }
    printf("Product of all digits in number is %d", product);
    return 0;
}