#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float blanace);

int main(){

    float balance = 0.0f;
    int choice = 0;

    printf("\n*** WELCOME TO THE WORLD BANK ***\n\n");

    do
    {
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance = balance + deposit(balance);
            break;
        case 3:
            balance = balance - withdraw(balance);
            break;
        case 4:
            printf("Thank you, see you again!\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 4);

    return 0;
}

void checkBalance(float balance){

    printf("\nYour current balance is %.2f\n", balance);
}


float deposit(){
    float amount = 0.0f;

    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
    }
    else{
        printf("Succesfully deposited $%.2f\n", amount);
    }

    return amount;
}


float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw : ");
    scanf("%f", &amount);

    if(amount > balance){
        printf("\nInsufficient funds! Your balance is %.2f\n", balance);
        return 0.0f;
    } else {
        printf("Succesfully withdraw $%.2f\n", amount);
        return amount;
    }
}