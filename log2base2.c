#include <stdio.h>

int main(){
    int nums;
    int sum = 0;

    printf("Enter the number of input: ");
    scanf("%d", &nums);

    int arr[nums];

    for(int i = 1; i <= nums; i++){
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < nums; i++){
        sum = sum + arr[i + 1];
    }

    printf("Result: %d\n", sum);

    return 0;

}