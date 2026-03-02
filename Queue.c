#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int a){
    if(rear == N - 1){
        printf("Overflow!\n");
        return;
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = a;
    }
    else{
        rear++;
        queue[rear] = a;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Underflow!\n");
        return;
    }
    else if(front == rear){
        printf("Item poped: %d\n", queue[front]);
        front = rear = -1;
    }
    else {
        printf("Item poped: %d\n", queue[front]);
        front++;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Underflow!\n");
        return;
    }
    else{
        printf("Items in Queue:\n");
        for(int i = front; i <= rear; i++){
            printf("%d\n", queue[i]);
        }
    }
}

void peek(){
    if(front == -1 && rear == -1){
        printf("Underflow!\n");
        return;
    }
    else {
        printf("The Top most element in Queue: %d\n", queue[front]);
    }
}

void main(){
    enqueue(2);
    enqueue(5);
    enqueue(-8);
    display();
    peek();
    dequeue();
    peek();
    display();
}