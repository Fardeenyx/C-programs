
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userchoice, int computerchoice);

int main(){

    int userchoice = 0;
    int computerchoice = 0;

    printf("*** ROCK PAPER SCISSORS ***\n");

    userchoice = getUserChoice();
    computerchoice = getComputerChoice();
    
    switch (userchoice)
    {
    case 1:
        printf("You chose ROCK!\n");
        break;
    case 2:
        printf("You chose PAPER!\n");
        break;
    case 3:
        printf("You chose SCISSORES!\n");
        break;
    }

    switch (computerchoice)
    {
    case 1:
        printf("Computer chose ROCK!\n");
        break;
    case 2:
        printf("Computer chose PAPER!\n");
        break;
    case 3:
        printf("Computer chose SCISSORES!\n");
        break;
    }

        checkWinner(userchoice, computerchoice);

    return 0;
}

int getComputerChoice(){
    
    srand(time(NULL));

    int min = 1;
    int max = 3;
    
    int computer = (rand() % (max - min + 1)) + min;

    return computer;
}

int getUserChoice(){
    int user = 0;

   do
   {
    printf("Choose an option\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissores\n");
    printf("Enter you'r choice: ");
    scanf("%d", &user);
   } while (user < 1 || user > 3);
   
    return user;
}

void checkWinner(int userchoice, int computerchoice){
    
    if(userchoice == computerchoice){
        printf("It's a TIE!\n");
    }
    else if(userchoice == 1 && computerchoice == 3){
        printf("You WON!\n");
    }
    else if(userchoice == 2 && computerchoice == 1){
        printf("You WON!\n");
    }
    else if(userchoice == 3 && computerchoice == 2){
        printf("You WIN!\n");
    } else {
        printf("You LOSE!\n");
    }
}