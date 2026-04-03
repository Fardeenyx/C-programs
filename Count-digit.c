// Count frequency of a digit in a number

#include <stdio.h>

int main(){
    int num, target;
    int digit = 0, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter the target: ");
    scanf("%d", &target);

    if(num == 0 && target == 0){
        count = 1;
    }

    while(num != 0){
        digit = num % 10;
        if(digit == target){
            count++;
        }
        num = num / 10;
    }

    printf("The total number of %d in number: %d\n",target, count);

    return 0;
}