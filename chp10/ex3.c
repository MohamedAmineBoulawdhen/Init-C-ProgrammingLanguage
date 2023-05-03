#include <stdio.h>

#define SIZE 5

int largest_value(int *, int);

int main(void)
{
    int arr[] = {1, 2, 1211, 4, 5};
    printf("The largest value is %d", largest_value(arr, SIZE));
    return 0;
}

int largest_value(int *arr, int n)
{
    int i, lg;
    for (i = 1, lg = *arr; i < n; i++)
    {
        if (*(arr + i) > lg)
            lg = *(arr + i);
    }
    return lg;
}
