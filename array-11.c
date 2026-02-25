#include <stdio.h>

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    printf("Elements on even index...\n");
    for(i = 0 ; i < 10; i++){
        if(i % 2 == 0){
            printf("%d\t", array[i]);
        }
    }

    printf("\nElement on odd index...\n");
    for(i = 0; i < 10; i++){
        if(i % 2 != 0){
        printf("%d\t", array[i]);
        }
    }

    return 0;
}