#include <stdio.h>

int main(void)
{
    char numpad[][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'},
                        {'7', '8', '9'}, 
                        {'*', '0', '#'}};

    int size = sizeof(numpad) / sizeof(numpad[0]);

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            printf("%3c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}