#include <stdio.h>

union abc{
    int a;
    char b;
    float c;
};

struct xyz{
    int a;
    char b;
    float c;
};


int main(){
    union abc u;
    u.a = 1;
    u.b = 'a';
    u.c = 1.2;

    printf("\nValue stored:-\n"); // Printing the stored value

    printf("%d\n", u.a);
    printf("%c\n", u.b);
    printf("%f\n", u.c);

    printf("\nAddress of variabes:-\n"); // Printing the address of the variable of union

    printf("\n%d\n", &u.a);
    printf("%d\n", &u.b);
    printf("%d\n", &u.c);

    struct xyz s;

    s.a = 1;
    s.b = 'a';
    s.c = 1.1;
    
     printf("\nValue stored:-\n"); // Printing the sotred value

    printf("%d\n", s.a);
    printf("%c\n", s.b);
    printf("%f\n", s.c);

    printf("\nAddress of variabes:-\n"); // Printing the address of the variable of sturct

    printf("\n%d\n", &s.a);
    printf("%d\n", &s.b);
    printf("%d\n", &s.c);

    return 0;
}