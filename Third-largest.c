#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(){
    int n;
    bool allsame = true;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < n; i++){
        if(arr[i] != arr[0]){
            allsame = false;
            break;
        }
    }

    if(allsame){
        printf("All the numbers are same (%d), There is no largest, second largest and third largest number!", arr[0]);
    }

    int largest = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            third = second;
            second = largest;
            largest = arr[i];
        }

        if(arr[i] > second && arr[i] != largest){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != largest){
            third = arr[i];
        }
    }

    printf("\n-----------------------\n");
    printf("Largest number: %d\n", largest);
    printf("Second largest number: %d\n", second);
    if(third == INT_MIN){
        printf("There is no third largest number\n");
    }
    else {
        printf("Third largest number: %d\n", third);
    }
    printf("--------------------------\n");

    return 0;
}