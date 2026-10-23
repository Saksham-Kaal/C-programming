#include <stdio.h>
int main()
{
    // here rev- denotes reverse of number, rem-denotes remainder.
    int n, rev = 0, rem;
    printf("Enter number to reverse n:= ");
    scanf("%d", &n);
    // Loop runs until the number becomes 0
    while (n != 0)
    {
        rem = n % 10;         // Extract the last digit
        rev = rev * 10 + rem; // Append it to the reversed number
        n = n / 10;
        // Remove the last digit from the original number
    }
    printf("Reversed number:= %d\n", rev);

    return 0;
}