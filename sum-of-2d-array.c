#include <stdio.h>

int main(){
    int first[3][3] = {{1, 2, 3}, // first 2d array
                      {4, 5, 6},
                      {7, 8, 9}};

    int sec[3][3] = {{5, 6, 7}, // seconde 2d array
                     {1, 2, 3},
                     {9, 8, 7}};

    printf("First array\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t\t", first[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond array\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t\t", sec[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of both array:\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t\t", first[i][j] + sec[i][j]);
        }
        printf("\n");
    }

    return 0;
}