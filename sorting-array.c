#include <stdio.h>

void sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    printf("The sorted array...\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[] = {6, 7, 8, 9, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

    return 0;
}