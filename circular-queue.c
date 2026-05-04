#include  <stdio.h>
#define N 5
int arr[N];
int front = -1;
int rear = -1;

void enqueue(){
    int a;

    printf("Enter value to insert: ");
    scanf("%d", &a);

    if((rear + 1) % N == front){
        printf("Overflow!\n");
        return;
    } else if (front == -1 && rear == -1){
        front = rear = 0;
        arr[rear] = a;
    } else {
        rear = (rear + 1) % N;
        arr[rear] = a;
    }
}

void dequeue() {
    if (front == -1 && rear == -1){
        printf("Underflow!\n");
        return;
    } else if(front == rear){
        printf("item popped: %d\n", arr[front]);
        front = rear = -1;
    } else {
        printf("Item popped: %d\n", arr[front]);
        front = (front + 1) % N;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("The Queue is empty!\n");
        return;
    } else {
        printf("Item in Queue: \n");
        int i = front;
        while(i != rear){
            printf("%d\n", arr[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", arr[rear]);
    }
}

void peek(){
    if(front == -1 && rear == -1){
        printf("The Queue is empty!\n");
        return;
    } else {
        printf("The top most element in Queue: %d\n", arr[front]);
    }
}

int main(){
    int choice;
    int exit;

    while(exit != 5){
        printf("\n-----THE QUEUE-----\n");
        printf("1) Enqueue.\n");
        printf("2) Dequeue.\n");
        printf("3) Display.\n");
        printf("4) Peek.\n");
        printf("5) Exit.\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

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
            break;
        }
    }

    return 0;
}