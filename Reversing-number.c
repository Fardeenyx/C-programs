#include <stdio.h>

int main(){
    int num, i;
    int remainder = 0, reversed = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = num; i > 0; i = i / 10){
        remainder = i % 10;
        reversed = (reversed * 10) + remainder;
    }

    printf("The Reversed number: %d\n", reversed);

    return 0;
}