#include <stdio.h>

int main(void)
{
    float investment = 1000000., interest1 = 0.08, spending = 100000.;
    int years = 0;
    while (investment > 0)
    {
        investment -= spending;
        investment += interest1 * investment;

        years++;
    }
    printf("Rest=%f,so %d years", investment, years);
    return 0;
}