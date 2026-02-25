// Passing Array Element's to a Function...

#include <stdio.h>
void display1(int );
void display2(int *);
int main()
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};
    for (i = 0; i <= 6; i++)
        dislay1(marks[i]); // passing value of an array element.
    for (i = 0; i <= 6; i++);
        display2(&marks[i]); // passing address of an array element.
    return 0;
}
void display1( int m )
{
    printf("%d", m);
}
void display2(int *n)
{
    printf("%d", *n);
}