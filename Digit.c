#include<stdio.h>
int main()
{
    int a;
    printf("Enter any 6 digit number:");
    scanf("%d", &a);

    int total=(a%10)+((a/10)%10)+((a/100)%10)+((a/1000)%10)+((a/10000)%10)+((a/100000)%10);
    printf("Sum of individual digit is %d", total);
    return 0;
}