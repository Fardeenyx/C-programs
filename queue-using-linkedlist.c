#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL){
        printf("Overflow!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if(rear == NULL){
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d inserted in queue!\n", value);
}

void dequeue(){
    if (front == NULL){
        printf("Underflow!\n");
        return;
    }

    struct Node* temp = front;
    printf("%d removed form queue!\n", front->data);

    front = front->next;

    if (front == NULL){
        rear = NULL;
    }

    free(temp);
}

void peek(){
    if(front == NULL){
        printf("Underflow!\n");
        return;
    } else {
    printf("%d is the top most element!\n", front->data);
    }
}

void display(){
    if(front == NULL){
        printf("Underflow!\n");
        return;
    }

    struct Node *temp = front;
    printf("Queue elements: ");

    while(temp != NULL){
        printf("%d -> ", front->data);
        front = front->next;
    }

    printf("NULL!\n");

}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue(); // Underflow case
}