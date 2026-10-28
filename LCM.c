#include <stdio.h>

int main(void)
{
    int a, b, lcm;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    for (lcm = (a > b ? a : b); ; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}