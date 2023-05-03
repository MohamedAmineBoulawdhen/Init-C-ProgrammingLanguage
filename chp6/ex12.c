#include <stdio.h>
int main(void)
{
    int k;
    float sign = 1;
    double sum1 = 0.0, sum2 = 0.0;
    printf("enter the number of terms in the serie: ");
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        sum1 += 1. / (1. + i);
        sum2 += (1. / (1. + i)) * sign;
        sign = -sign;
    }
    printf("sum1=%lf,sum2=%lf\n", sum1, sum2);

    return 0;
}