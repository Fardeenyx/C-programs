#include <stdio.h>

void sortingArray(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted array: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int binarySearch(int arr[], int size, int target){
    sortingArray(arr, size);
       
    int low = 0;
    int high = size - 1;

    while(low <= high){
       int mid = (low + high)/2;

       if(arr[mid] == target){
        return mid;
       }

       if(arr[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    int target;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the value of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int size = n;

    printf("Enter a element to find: ");
    scanf("%d", &target);

    int indexFound = binarySearch(arr, size, target);

    if(indexFound != -1){
        printf("Element %d is found at %d index.\n", target, indexFound);
    } else {
        printf("Element not found!!\n");
    }

    return 0;

    
}