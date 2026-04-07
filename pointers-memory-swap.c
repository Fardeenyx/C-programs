#include <stdio.h>

void swap(int* arr, int size){
    int* first = arr;
    int* last = arr + (size - 1);

    while(first < last){
        int temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    swap(arr, size);

    return 0;
}