#include <stdio.h>

#define SIZE 5

int largest_value(double *, int);

int main(void)
{
    double arr[] = {11111, 2, 1211, 4, 5};
    printf("The index of the largest value is %d", largest_value(arr, SIZE));
    return 0;
}

int largest_value(double *arr, int n)
{
    double lg;
    int i, index_lg;
    for (i = 1, lg = *arr, index_lg = 0; i < n; i++)
    {
        if (*(arr + i) > lg)
        {
            lg = *(arr + i);
            index_lg = i;
        }
    }
    return index_lg;
}
