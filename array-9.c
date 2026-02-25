/* This program will find the number enter by the user in the defined array */

#include <stdio.h>
int main()
{
    int arr[] = {7, 3, 5, 4, 6, 7, 2, 4, 6, 7};
    int n, i, count = 0;
    printf("\nEnter an element to search = ");
    scanf("%d", &n);
    for ( i = 0; i <= 9; i++){
        if( arr[i] == n )
            count ++;
    }

    printf("Number %d is found %d times in the array\n", n, count);
    return 0;
}