#include <stdio.h>

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5, 7, 4, 3, 8, 9, 109, 67, 45, 345, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 56;
    int searchIndex = linearSearch(arr, size, target);

    if(searchIndex != -1){
        printf("The element %d is found at %d index\n", target, searchIndex);
    } else {
        printf("Element not found!\n");
    }

    return 0;
}