#include <stdio.h>
#define ROW 3
#define COL 5

void fill_arr(double (*pt)[m], int);
void avg_arr(double (*pt)[m], int);
void lrg_value(double (*pt)[m], int);

int main(void)
{
    double arr1[ROW][m];
    fill_arr(arr1, ROW);
    avg_arr(arr1, ROW);
    lrg_value(arr1, ROW);
    return 0;
}

void fill_arr(double (*pt)[m], int n)
{
    printf("Please fill the array(3*5):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter arry [%d][%d]= \n", i, j);
            scanf("%lf", *(pt + i) + j);
        }
    }
}

void avg_arr(double (*pt)[m], int n)
{
    double sum_set = 0.0, sum_total = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum_set = 0;
        printf("\nThe average of set number %d is ", i + 1);
        for (int j = 0; j < m; j++)
        {
            sum_set += *(*(pt + i) + j);
        }
        printf("%g", (float)sum_set / m);

        sum_total += sum_set;
    }
    printf("\nThe average of all the values is %g", (float)sum_total / (n * m));
}

void lrg_value(double (*pt)[m], int n)
{
    double lg;
    lg = **pt;
    printf("\n**pt= %lf", **pt);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pt[i][j] > lg)
                lg = *(*(pt + i) + j);
        }
    }
    printf("\nThe largest value of the 15 values is %.lf", lg);
}
