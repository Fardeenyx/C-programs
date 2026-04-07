#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node* n1 = malloc(sizeof(struct Node));
    struct Node* n2 = malloc(sizeof(struct Node));
    struct Node* n3 = malloc(sizeof(struct Node));
    struct Node* n4 = malloc(sizeof(struct Node));

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;

    struct Node* current = n1;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }

    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}