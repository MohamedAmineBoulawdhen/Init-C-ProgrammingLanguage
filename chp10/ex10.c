#include <stdio.h>

void copy_ptr(double *, double *, double *, int n);

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 7, 11};
    double target1[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 7, 11};
    double target2[7];
    copy_ptr(source, target1, target2, 7);

    return 0;
}

void copy_ptr(double *arr1, double *arr2, double *arr3, int n)
{
    printf("    sum:\n");
    for (int i = 0; i < n; i++)
    {
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i);
        printf("%g + %g = %g \n", *(arr1 + i), *(arr2 + i), *(arr3 + i));
    }
    printf("\n");
}
