#include <stdio.h>

void larger_of(double *, double *);

int main()
{
    double x, y;
    printf("Enter two numbers seperated by space(q to quit):\n");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("Before--x: %.lf and y: %.lf.\n", x, y);
        larger_of(&x, &y);
        printf("After--x: %.lf and y: %.lf.\n", x, y);
        printf("Enter two numbers seperated by space(q to quit):\n");
    }
    return 0;
}
void larger_of(double *u, double *v)
{
    if (*u > *v)
        *v = *u;
    else
        *u = *v;
}