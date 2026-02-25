// Pointer Arithmetic...

#include <stdio.h>
int main()
{
    int i = 3, *x;
    float j = 1.5, *y;
    char k = 'c', *z;
    printf("Value of i = %d\n", i);
    printf("Value of j = %f\n", j);
    printf("Value of k = %c\n", k);
    x = &i;
    y = &j;
    z = &k;
    printf("Original address of x = %u\n", x);
    printf("Original address of y = %u\n", y);
    printf("Original address of z = %u\n", z);
    x++, y++, z++; /* it will points to an address four locations after the current location 
                      (current location + of its type (int = 4 bytes, float = 4 bytes, chat = 1 bytes)); */
    printf("New address in x = %u\n", x);
    printf("New address in y = %u\n", y);
    printf("New address in z = %u\n", z); // the vlaue stored in this new address is garbage value.

    return 0;
}