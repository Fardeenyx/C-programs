// Accessubg Array Element using Pointer.

#include <stdio.h>
int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};
    int i, *ptr;
    ptr = &num[0]; /* assign address of zeroth element */
    for (i = 0; i <= 5; i++)
    {
        printf("Address = %d, Element = %d\n", ptr, *ptr);
        ptr++; /*Increment pointer to point to next integer*/
    }
    return 0;
}