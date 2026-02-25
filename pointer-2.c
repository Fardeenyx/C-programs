#include <stdio.h>
void conf(float , float *, float *, float *);
int main()
{
    float w;
    float g, t, p;
    printf("Eneter you'r weight in kilogram(kg) : ");
    scanf("%f", &w);
    conf(w, &g, &t, &p);
    printf("Your weight in gram : %.2f\n", g);
    printf("Your weight in ton : %.2f\n", t);
    printf("Your weight in Pound : %.2f\n", p);
    return 0;
}

void conf(float weight, float *gram, float *ton, float *pound)
{
    *gram = weight * 1000.0f;
    *ton = weight / 1000.0f;
    *pound = weight * 2.205;
}