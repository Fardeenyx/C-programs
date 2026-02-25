#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char expr[MAX];
    char stack[MAX];
    int top = -1;
    int valid = 1;

    printf("Enter expression: ");
    fgets(expr, MAX, stdin);

    int len = strlen(expr);

    for(int i = 0; i < len; i++){
        char ch = expr[i];

        if(ch == '(' || ch == '[' || ch == '{'){
            if(top == MAX - 1){
                valid = 0;
                break;
            }
            stack[++top] = ch;
        }
        else if(ch == ')' || ch == ']' || ch == '}'){
            if (top == -1){
                valid = 0;
                break;
            }

            char popped = stack[top--];

            if((ch == ')' && popped != '(') ||
              (ch == ']' && popped != '[') ||
              (ch == '}' && popped != '{')) {
                valid = 0;
                break;
            }
        }
    }

    if(top != -1){
        valid = 0;
    }

    if(valid){
        printf("The string is valid\n");
    }
    else {
        printf("The string is invalid\n");
    }

    return 0;
}