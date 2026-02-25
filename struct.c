#include <stdio.h>

typedef struct{
    char modle[50];
    int year;
    int price;
}Car;

int main(){

    Car cars[] = {{"Mustang", 2025, 32000},
                  {"Corvetter", 2026, 68000},
                  {"Challneger", 2024, 29000}};

    int size = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < size; i++){
          printf("%s %d $%d\n", cars[i].modle, cars[i].year, cars[i].price);
    }

    return 0;
}