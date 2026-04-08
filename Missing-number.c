#include <stdio.h>

int main(){
    int expectedsum = 0;
    int actualsum = 0;
    int s = 0;

    printf("Enter the size of array: ");
    scanf("%d", &s);

    if(s <= 0){
        printf("Array Size cant be in negative/Zero\n");
        return 0;
    }

    int arr[s];


    printf("Enter the elements:");
    for(int i = 0; i < s; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < s; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                printf("There is duplicate number in array %d\n", arr[i]);
                return 0;
            }
        }
    }

    int n = s + 1;

    expectedsum = n * (n + 1) / 2;

    for(int i = 0; i < s; i++){
        actualsum = actualsum + arr[i];
    }

    int result = expectedsum - actualsum;

    printf("The missing element in array: %d\n", result);

    return 0;
}