#include <stdio.h>
int leap(int );
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(leap(year)){
        printf("The year %d is a leap year\n", year);
    } else {
        printf("The year %d is not a leap year\n", year);
    }

    return 0;
}

int leap(int x)
{
    return ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
}