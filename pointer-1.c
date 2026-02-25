#include <stdio.h>
void swap(int *, int *, int *);
int main()
{
    int x, y, z;
    int s;
    printf("Enter the value of x, y, z : ");
    scanf("%d %d %d",&x, &y, &z);
    swap(&x, &y, &z);
    printf("The swap value of x, y, z : %d %d %d",x, y, z);
    return 0;
}

void swap(int *x, int *y, int *z)
{
    int temp;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}