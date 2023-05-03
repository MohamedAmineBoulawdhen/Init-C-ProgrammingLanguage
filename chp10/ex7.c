#include <stdio.h>

void copy_arr(double[], double[], int n);
void copy_ptr(double *, double *, int n);
void copy_ptrs(double *, double *, double *);

int main(void)
{
    double source[3][2] = {1.1, 2.2, 3.3, 4.4, 5.5}; // 0 is complited by compiler dont worry
    double target1[3][2];

    for (int i = 0; i < 3; i++)
    {
        copy_arr(*(source + i), *(target1 + i), 2);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%g ", *(*(target1 + i) + j));
        }
    }
    // copy_ptr(source, target1, 5);
    // copy_ptrs(source, target1, target1 + 5);

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

// void copy_ptr(double *arr1, double *arr2, int n)
// {
//     printf("copy_ptr: ");
//     for (int i = 0; i < n; i++)
//     {
//         *(arr2 + i) = *(arr1 + i);
//         printf("%.1f ", *(arr2 + i));
//     }
//     printf("\n");
// }

// void copy_ptrs(double *arr1, double *arr2, double *addrr_lstelem)
// {
//     printf("copy_ptrs: ");
//     for (double *i = arr2; i < addrr_lstelem; i++)
//     {
//         *i = *(arr1 + (i - arr2));
//         printf("%.1f ", *i);
//     }
//     printf("\n");
// }
