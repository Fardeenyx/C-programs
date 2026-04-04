#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    bool allsame = true;

    // Taking input of size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking input in the array
    for(int i = 0; i < n; i++){
        printf("Enter %d number: ", i+ 1);
        scanf("%d", &arr[i]);
    }

    // Checking if all the numbers are not same 
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[0]){
            allsame = false;
            break;
        }
    }

    // if all the numbers in array are same
    if(allsame){
        printf("All the numbers are same (%d), There is no largest or second largest number!\n", arr[0]);
        return 0;
    }

    int largest = -2147483648; // Smallest possible number
    int second = -2147483648;

    // Finding the largest and second largest number
    for(int i = 0 ; i < n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        } 
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    printf("\n---------------------------\n");
    printf("Largest Number: %d\n", largest);
    printf("Second Largest Number: %d\n", second);
    printf("---------------------------");

    return 0;
}