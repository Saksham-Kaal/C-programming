#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;
}
int main()
{
    printf("Factorial from 7 to 20 \n");
    for(int i=7;i<=20;i++)
    {
        int result=factorial(i);
        printf("Factorial of %d is:%d\n",i,result);
    }
    return 0;
}