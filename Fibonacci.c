#include <stdio.h>
int main()
{
    int i, n; // initialize first & second term
    int t1 = 0, t2 = 1;
    int nt = t1 + t2;

    // number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // print the first two terms t1 and t2
    printf("Fibonacci Series: %d, %d,", t1, t2); // print 3rd to nth terms
    for (i = 3; i <= n; ++i)
    {

        printf("%d,", nt);

        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
    }

    return 0;
}