#include <stdio.h>
#define STOP 0

int main(void)
{
    int nb;

    int totalOdd = 0, totalEven = 0, countOdd = 0, countEven = 0;
    float averageOdd = 0, averageEven = 0;

    printf("Type a number(0 to quit):\n");
    while (scanf("%d", &nb) != 0 && nb != STOP)
    {
        if ((nb % 2) == 0)
        {
            totalEven += nb;
            countEven++;
        }

        else
        {
            totalOdd += nb;
            countOdd++;
        }
    }
    averageEven = countEven == 0 ? 0 : (float)totalEven / countEven;
    averageOdd = countOdd == 0 ? 0 : (float)totalOdd / countOdd;
    printf("\nTotal odd:%d,average odd:%.2f;Total even:%d,average even:%.2f\n", totalOdd, averageOdd, totalEven, averageEven);

    return 0;
}