#include <stdio.h>

int main()
{
    int arr[] = {2, 7, 5, 90, 3, 67, 100, 110, 45, 69};
    int max = arr[0];
    int second = arr[0];

    for(int i = 1; i < 10; i++){
        if(arr[i] > max){
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max){
            second = arr[i];
        }
    }

    printf("Second largest number is: %d\n", second);
    return 0;
}