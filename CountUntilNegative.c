#include <stdio.h>
int main()
{
    int n, i = 0;
    do
    {
        printf("Enter any number: ");
        scanf("%d", &n);
        if (n >= 0)
        {
            i += 1;
        }
        else
        {
            break;
        }
    } while (1);
    printf("Total positive numbers entered: %d", i);
    return 0;
}