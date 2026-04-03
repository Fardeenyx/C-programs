#include <stdio.h>

int reverseNumber(int num){
    int remainder = 0, reversed = 0;

    while(num != 0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    return reversed;
}

void checkPalindrome(int origianl, int reversed){
    if (origianl == reversed){
        printf("The Number is palindrome.\n");
    } else {
        printf("The Number is not palindrome.\n");
    }
}

int checkNegative(int num){
    if(num <= 0){
        return 1;
    } else {
        return 0;
    }
}


int main(){
    int num, i;
    int remainder = 0, reversed = 0;

    printf("Enter number (only positive): ");
    scanf("%d", &num);

    int original = num;
    int rev = reverseNumber(num);

    if(checkNegative(num)){
        printf("Not avalaible for negative number yet!!");
    } else {
        printf("The Reversed number: %d\n", rev);
        checkPalindrome(original, rev);
    }

    return 0;
}