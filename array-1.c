// A simple Program using Array...

#include <stdio.h>
int main()
{
    int avg, sum = 0;
    int i;
    int marks[10]; // Array declaration
    for(i = 0; i <= 9; i++)
    {
        printf("Enter the marks : ");
        scanf("%d", &marks[i]); // store data in array 
    }
    for(i = 0; i <= 9; i ++)
       sum = sum + marks[i]; // read data form an array✅
       avg = sum / 30;
       printf("Average marks = %d\n", avg);
       return 0;
}
