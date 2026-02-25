#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;

    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grade = malloc(number * sizeof(char));

    if(grade == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade number %d: ", i + 1);
        scanf(" %c", &grade[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grade[i]);
    }

    free(grade);
    grade = NULL;



    return 0;
}