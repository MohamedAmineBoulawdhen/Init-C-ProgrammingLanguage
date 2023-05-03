#include <stdio.h>

#define SIZE 5

void largest_value(double *, int);

int main(void)
{
    double arr[] = {9, 2, 1, 4, 5};
    largest_value(arr, SIZE);
    return 0;
}

void largest_value(double *arr, int n)
{
    double arr1[n];
    int k, i;
    for (i = n - 1, k = 0; i >= 0; i--, k++)
    {
        *(arr1 + k) = *(arr + i);
    }
    for (i = 0; i < n; i++)
    {
        *(arr + i) = *(arr1 + i);
        printf("%g ", *(arr + i));
    }
}
