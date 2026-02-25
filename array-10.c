/* This is the program to check the total numbers of positive , negative, zeros and even, odd in the array
   which values is enterd by the user */

#include <stdio.h>
int main()
{
    signed int arr[10]; // it will store ten only postive values 
    int i;
    int positive = 0, negative = 0, zero = 0; 
    int even = 0, odd = 0;
    
    printf("Eneter the element of the array = ");
    for ( i = 0; i <= 9; i++){
        scanf("%d", &arr[i]);
  
        if (arr[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
        if( arr[i] > 0 ){
            positive++;
        } else if ( arr[i] < 0){
            negative++;
        } else {
            zero++;
        }
    }

    printf("\n The number of positive numbers : %d\n", positive);
    printf("The number of negative numbers : %d\n", negative);
    printf("The number of zeros = %d\n", zero);
    printf("The number of Odd numbers : %d\n", odd);
    printf("The number of Even numbers : %d\n", even);

    return 0;
}