#include <stdio.h>
#include <math.h>

int main(void)
{
    double rate = 0.0;
    double principal = 0.0;
    int year = 0;
    int timesCompound = 0;
    int total = 0;

    printf("Compound Intrest Calculator\n");

    printf("Enter the principal (p): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);

    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &year);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompound);

    total = principal * pow(1 + rate / timesCompound, timesCompound * year);

    printf("After %d years, the total will be $%.2lf", year, total);

    return 0;
}