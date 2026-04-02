#include <stdio.h>
#include <string.h>

int main(){
    char num[100];

    printf("Enter number: ");
    scanf("%s", num);

    printf("Number of digits: %lu\n", strlen(num));

    return 0;
}