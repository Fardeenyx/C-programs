#include <stdio.h>

int linearsearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[] = {1, 4, 6, 3, 7, 9, 0, 5, 10, 23, 45, 56, 29, 5};
    int target = 0;
    
    printf("Enter element to find: ");
    scanf("%d", &target);

    int n = sizeof(array) / sizeof(array[0]);

    int result = linearsearch(array, n, target);

    if (result != -1){
        printf("The element %d is found at %d index\n", target, result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}