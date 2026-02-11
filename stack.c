#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push(int *stack, int size);
void pop(int *stack);
void peek(int *stack);
void display(int *stack);

int main(void)
{
    int *stack;
    int size;
    int choice;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));

    if (stack == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    while (1)
    {

        printf("\n1) Push\n");
        printf("2) Pop\n");
        printf("3) Peek\n");
        printf("4) Display\n");
        printf("5) Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice > 5 || choice < 1){
            printf("Invalid operator!\n");
            return 1;
        }

        switch (choice)
        {
        case 1:
            push(stack, size);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            peek(stack);
            break;
        case 4:
            display(stack);
            break;
        case 5:
            return 1;
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    }

    free(stack);

    return 0;
}

void push(int *stack, int size)
{
    int x;

    if (top == size - 1)
    {
        printf("Stack overflow!\n");
        return;
    }

    printf("\nEnter data: ");
    scanf("%d", &x);

    top++;
    stack[top] = x;
    printf("Item %d is pushed in stack\n", x);
}

void pop(int *stack)
{
    int x;

    if (top == -1)
    {
        printf("Stack underflow!\n");
        return;
    }

    x = stack[top];
    top--;
    printf("Item %d poped\n", x);
}

void peek(int *stack)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("The top most element in stack %d\n", stack[top]);
}

void display(int *stack)
{
    if (top == -1)
    {

        printf("Stack is empty\n");
        return;
    }

    printf("Elements in stack...\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}