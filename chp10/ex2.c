#include <stdio.h>

void copy_arr(double[], double[], int n);
void copy_ptr(double *, double *, int n);
void copy_ptrs(double *, double *, double *);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(source, target1, 5);
    copy_ptr(source, target2, 5);
    copy_ptrs(source, target3, target3 + 5);

    return 0;
}

void copy_arr(double arr1[], double arr2[], int n)
{
    printf("copy_arr: ");
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
        printf("%.1f ", arr2[i]);
    }
    printf("\n");
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

void copy_ptrs(double *arr1, double *arr2, double *addrr_lstelem)
{
    printf("copy_ptrs: ");
    for (double *i = arr2; i < addrr_lstelem; i++)
    {
        *i = *(arr1 + (i - arr2));
        printf("%.1f ", *i);
    }
    printf("\n");
}
