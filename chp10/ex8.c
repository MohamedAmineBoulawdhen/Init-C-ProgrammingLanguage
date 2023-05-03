#include <stdio.h>

void copy_ptr(double *, double *, int n);

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 7, 11};
    double target1[3];

    copy_ptr(source + 2, target1, 3);

    return 0;
}

void copy_ptr(double *arr1, double *arr2, int n)
{
    printf("copy_ptr: ");
    for (int i = 0; i < n; i++)
    {
        *(arr2 + i) = *(arr1 + i);
        printf("%.1f ", *(arr2 + i));
    }
    printf("\n");
}
