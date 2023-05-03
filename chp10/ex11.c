#include <stdio.h>
#define ROW 3
#define COL 5
// void copy_arr(double[], double[], int n);
void _double(int (*arr1)[m], int n);
// void copy_ptrs(double *, double *, double *);
void show_arr(int[][m], int n);

int main(void)
{
    int arr[ROW][m] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; // 0 is complited by compiler dont worry

    _double(arr, ROW);
    show_arr(arr, ROW);

    return 0;
}

void _double(int (*arr1)[m], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(*(arr1 + i) + j) = (int)2 * (*(*(arr1 + i) + j));
        }
    }
    printf("\n");
}

void show_arr(int (*arr1)[m], int n)
{
    printf("********_double:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", *(*(arr1 + i) + j));
        }
    }
    printf("\n");
}