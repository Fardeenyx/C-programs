#include <stdio.h>
#include <math.h>
float distance(float *, float *, float *, float *);
float area(float *, float *, float *, float *, float *, float *);
int isinside(float *, float *, float *, float *, float *, float *, float *, float *);
int main()
{
    float x, y, x1, y1, x2, y2, x3, y3;
    int result;

    printf("Enter the value of x1, y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the value of x1, y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the value of x3, y3: ");
    scanf("%f %f", &x3, &y3);

    printf("Enter the coordiante of point (x, y): ");
    scanf("%d %d", &x, &y);

    result = isinside(&x1, &y1, &x2, &y2, &x3, &y3, &x, &y);

    if (result == 1)
    {
        printf("The point lies inside the triangle\n");
    }
    else
    {
        printf("The point is outside the triangle\n");
    }

    return 0;
}

float distance(float *x1, float *y1, float *x2, float *y2)
{
    float d;
    d = sqrt((*x2 - *x1) * (*x2 - *x1) + (*y2 - *y1) * (*y2 - *y1));
    return d;
}

float area(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    float a, b, c, s, r;
    a = distance(x1, y1, x2, y2);
    b = distance(x1, y1, x3, y3);
    c = distance(x2, y2, x3, y3);

    s = (a + b + c) / 2;

    r = sqrt(s * (s - a) * (s - b) * (s - c));

    return r;
}

int isinside(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3, float *x, float *y)
{
    float A, A1, A2, A3, R;

    A = area(x1, y1, x2, y2, x3, y3);
    A1 = area(x, y, x1, y1, x2, y2);
    A2 = area(x, y, x2, y2, x3, y3);
    A3 = area(x, y, x1, y1, x3, y3);

    R = A1 + A2 + A3;

    if (fabs(R - A) < 0.0001)
        return 1;
    else
        return 0;
}