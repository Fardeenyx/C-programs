#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL){
        printf("Overflow!\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d inserted in stack!\n", value);
}

void pop(){
    if(top == NULL){
        printf("Underflow!\n");
        return;
    }

    struct Node* temp = top;
    printf("%d popped from the stack!\n", top->data);
    top = top->next;
    free(temp);
}

void peek(){
    if(top == NULL){
        printf("Underflow!\n");
        return;
    } else {
        printf("%d is top most element!\n", top->data);
    }
}

void display(){
    if(top == NULL){
        printf("Underflow!\n");
        return;
    }

    struct Node* temp = top;
    printf("Item in stack: ");
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL!\n");
}

int main(){
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();
    display();

    pop();
    pop();
    pop(); // Underflow case

    return 0;
}