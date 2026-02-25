#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int guess;
    int randomNum = 0;
    int tries = 0;
    int max = 100;
    int min = 1;

    srand(time(NULL));

    randomNum = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME ***\n");

    do{
        printf("Guess the number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess > randomNum){
            printf("TOO HIGH!\n");
        } else if(guess < randomNum){
            printf("TOO LOW!\n");
        } else {
            printf("Correct!\n");
        }

        if(guess > max || guess < min){
            printf("Invalid input!\n");
        }

    }while(guess != randomNum);

    printf("The answer is %d\n", randomNum);
    printf("You took %d tries\n", tries);

    return 0;
}