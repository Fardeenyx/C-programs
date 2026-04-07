#include <stdio.h>

void tripleAll(int* arr, int size){
    int *current = arr;

    for(int i = 0; i < size; i++){
        *current = *current * 3;
        current = current + 1;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    tripleAll(arr, size);

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}