#include <stdio.h>

#define SIZE 5

double largest_value(double *, int);

int main(void)
{
    double arr[] = {9, 2, 1, 4, 5};
    printf("the difference between the largest and smallest elements is %.1g", largest_value(arr, SIZE));
    return 0;
}

double largest_value(double *arr, int n)
{
    double lg, sml;
    int i;
    for (i = 1, lg = sml = *arr; i < n; i++)
    {
        if (*(arr + i) > lg)
            lg = *(arr + i);

        if (*(arr + i) < sml)
            sml = *(arr + i);
    }
    return lg - sml;
}
