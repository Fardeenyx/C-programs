#include <stdio.h>

int gcd(int a, int b){
    int small = 0, GCD = 0;

    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    if (a == 0) return b;
    if (b == 0) return a;

    if(a < b){
        small = a;
    } else {
        small = b;
    }
    GCD = 1;

    for(int i = 1; i <= small; i++){
        if(a % i == 0 & b % i == 0){
            GCD = i;
        }
    }

    return GCD;

}

int main(){
    int a, b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("The GCD is: %d\n", gcd(a, b));

    return 0;
}