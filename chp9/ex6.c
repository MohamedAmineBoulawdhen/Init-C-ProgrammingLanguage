#include <stdio.h>

void larger_of(double *, double *, double *);

int main()
{
    double x, y, z;
    printf("Enter three numbers seperated by spaces(q to quit):\n");
    while (scanf("%lf %lf %lf", &x, &y, &z) == 3)
    {
        printf("Before --x: %.lf , y: %.lf and z:%.lf.\n", x, y, z);
        larger_of(&x, &y, &z);
        printf("After --x: %.lf , y: %.lf and z:%.lf.\n", x, y, z);
        printf("Enter three numbers seperated by spaces(q to quit):\n");
    }
    return 0;
}
void larger_of(double *u, double *v, double *w)
{
    double min, avg, max;
    if (*u > *v && *u > *w)
    {
        max = *u;
        if (*v > *w)
        {
            avg = *v;
            min = *w;
        }
        else
        {
            avg = *w;
            min = *v;
        }
    }
    else if (*v > *u && *v > *w)
    {
        max = *v;
        if (*u > *w)
        {
            avg = *u;
            min = *w;
        }
        else
        {
            avg = *w;
            min = *u;
        }
    }
    else if (*w > *u && *w > *u)
    {
        max = *w;
        if (*u > *v)
        {
            avg = *u;
            min = *v;
        }
        else
        {
            avg = *v;
            min = *u;
        }
    }
    else
        ;
    *u = min;
    *v = avg;
    *w = max;
}