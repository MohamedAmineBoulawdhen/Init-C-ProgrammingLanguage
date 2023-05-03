#include <stdio.h>

int main(void)
{
    int low, high, sum = 0;
    printf("Enter lower and upper integer limits: ");
    while (scanf("%d %d", &low, &high) == 2 && low != high)
    {
        for (int i = low; i <= high; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d.\n", low * low, high * high, sum);
        printf("Enter next set of limits: ");
        sum = 0;
    }
    printf("done!\n");

    return 0;
}