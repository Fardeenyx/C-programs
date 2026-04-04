#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 5};
    int Expected_sum = 0;
    int Actual_sum = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    int n = size + 1;

    Expected_sum = n * (n + 1) / 2;

    for(int i = 0; i < size; i++){
        Actual_sum = Actual_sum + arr[i];
    }

    int result = Expected_sum - Actual_sum;

    printf("The missing element in array: %d\n", result);

    return 0;
}