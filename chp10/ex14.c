#include <stdio.h>
#define ROW 3
#define COL 5

void fill_arr(int, int, double (*pt)[*]);
void avg_arr(int, int, double (*pt)[*]);
void lrg_value(int, int, double (*pt)[*]);

int main(void)
{
    double arr1[ROW][COL];
    fill_arr(ROW, COL, arr1);
    avg_arr(ROW, COL, arr1);
    lrg_value(ROW, COL, arr1);
    return 0;
}

void fill_arr(int n, int m, double pt[n][m])
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

void avg_arr(int n, int m, double pt[n][m])
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

void lrg_value(int n, int m, double pt[n][m])
{
    double lg;
    lg = **pt;
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
