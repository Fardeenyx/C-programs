/* This program will take input 5 element of the array and then it 
will reverse the elements and print it*/

#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], i, j;
    printf("Enter the 5 element of the array: ");
    for ( i = 0; i <= 4; i++ )
        scanf("%d",&arr1[i]);
    for ( i = 0, j = 4; i <= 4; i++, j-- )
        arr2[j] = arr1[i];
    printf("Elements in reverse order\n");
    for ( i = 0; i <= 4; i++ )
        printf("%d\t", arr2[i]);
    return 0;
}