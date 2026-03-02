#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int a){
    if(rear == N -1){
        printf("overflow!\n");
        return;
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = a;
    }
    else {
        rear++;
        queue[rear] = a;
    }
}

void dequeue(){
    int x;
    if(front == -1 && rear == -1){
        printf("Underflow!\n");
        return;
    }
    else if(front == rear){
        printf("The poped item is: %d\n", queue[front]);
        front = rear = -1;
    }
    else {
        printf("The poped item is: %d\n", queue[front]);
        front++;
    }
}

void peek(){
    if(front == -1 && rear == -1){
        printf("Underflow!\n");
        return;
    }
    else {
        printf("The top most element: %d\n", queue[front]);
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Underflow!\n");
        return;
    }
    else {
        printf("The items in queue:\n");
        for(int i = front; i <= rear; i++){
            printf("%d\n", queue[i]);
        }
    }
}

int main(){
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();

    return 0;
}