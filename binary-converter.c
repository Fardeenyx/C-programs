/* This is the program to convert Decimal Number to Binary Number... */

#include <stdio.h>

int main()
{
    int array[36];
    int i = 0;
    int num;

    printf("\n\t<<< Welcome to the Binary Converter >>>\n\n");

    printf("Enter a number: "); // taking input 
    scanf("%d", &num);

    if(num == 0)
    {
        printf("Invalid num!\n");
        return 0;
    }

    printf("The binary form of %d is...\n", num);

    while(num != 0)
    {
        array[i] = num % 2; // storing the remainder in array
        num = num / 2; // deviding the num by 2 again and again until its become zero...
        i++; 
    }

 

    for(int j = i - 1; j >= 0; j--) // Rverse array
    {
        printf("%d", array[j]); // printing the value store in array in reverse
    }

    return 0;
}