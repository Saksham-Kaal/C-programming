#include <stdio.h>
int main()
{
    int n;
    printf("Enter term for summation: ");
    scanf("%d", &n);
    int i=1;
    int sum = 0, num1 = 0, num2 = 1, num3;
    while (i <= n)
    {
       
        sum += num1;
         num3 = num2+num1;
         num1=num2;
         num2=num3;
        i++;
    }
    printf("Sum of %d terms of Fibonacci series is %d",n,sum);
    return 0;
}