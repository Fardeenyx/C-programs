#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
    int a;

    printf("Enter data to insert: ");
    scanf("%d", &a);

    if (rear == N - 1)
    {
        printf("Overflow!\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = a;
    }
    else
    {
        rear++;
        queue[rear] = a;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow!\n");
        return;
    }
    else if (front == rear)
    {
        printf("Item poped: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Item poped: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow!\n");
        return;
    }
    else
    {
        printf("\nItems in Queue:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow!\n");
        return;
    }
    else
    {
        printf("The Top most element in Queue: %d\n", queue[front]);
    }
}

void invalidInput(int choice)
{
    printf("Invalid choice!\n Enter your choice: ");
    scanf("%d", &choice);
}

int main()
{
    int choice = 0;
    int exit;

    while (exit != 5)
    {
        printf("\n-----THE QUEUE-----\n");
        printf("1) Enqueue.\n");
        printf("2) Dequeue.\n");
        printf("3) Display.\n");
        printf("4) Peek.\n");
        printf("5) Exit.\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice > 4 && choice < 1)
        {
            invalidInput(choice);
        }

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            return 1;
            break;
        default:
            invalidInput(choice);
        }
    }

    return 0;
}