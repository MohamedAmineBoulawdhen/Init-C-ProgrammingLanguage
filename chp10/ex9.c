#include <stdio.h>
#define X 3
#define Y 5

void copy_array(int, int, double[*][*], double[*][*]);

int main(void)
{
    int n = 3, m = 5;

    double arr1[X][Y] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    double arr2[X][Y];
    copy_array(n, m, arr1, arr2);
    return 0;
}

void copy_array(int n, int m, double arr1[n][m], double arr2[n][m])
{
    printf("arr1     arr2\n");
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            *(*(arr2 + i) + j) = *(*(arr1 + i) + j);
            printf("%4g%9g\n", *(*(arr2 + i) + j), *(*(arr1 + i) + j));
        }
    }
}
