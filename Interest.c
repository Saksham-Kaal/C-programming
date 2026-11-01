#include <stdio.h>
#include <math.h>

int main(void)
{
    double p, r, t, si, ci;
    printf("Enter principal, annual rate (%%), and time (years): ");
    scanf("%lf %lf %lf", &p, &r, &t);

    si = (p * r * t) / 100.0;
    ci = p * pow(1.0 + r / 100.0, t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest (compounded annually) = %.2f\n", ci);
    return 0;
}
