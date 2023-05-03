#include <stdio.h>

int main(void)
{
    float investment = 100, interest1 = 0.1, interest2 = 0.05;
    float sum1 = 0, sum2 = 0;
    int years = 0;
    while (sum1 + sum2 < investment * 2)
    {
        sum1 += interest1 * investment;
        sum2 += interest2 * investment;
        interest1 += 0.1;
        interest2 += 0.05 * 2;
        years++;
    }
    printf("sum1=%.f,sum2=%.f,so %d years", sum1, sum2, years);
    return 0;
}