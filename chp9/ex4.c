#include <stdio.h>

double larger_of(double, double);

int main()
{
    double x, y;
    printf("Enter two numbers seperated by space(q to quit):\n");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("The harmonic mean of %lf and %lf is: %lf.\n", x, y, larger_of(x, y));
        printf("Enter two numbers seperated by space(q to quit):\n");
    }
    return 0;
}
double larger_of(double u, double v)
{
    return (1. / (((1. / u) + (1. / v)) / 2.));
}