#include <stdio.h>

int main(void)
{
    int low, high;
    printf("enter the lower and upper limits for the table:\n");
    printf("the lower limit: ");
    scanf("%d", &low);
    printf("\nthe upper limit: ");
    scanf("%d", &high);
    printf("number square cube\n");
    for (int i = low; i <= high; i++)
    {
        printf("%5d %5d %5d\n", i, i * i, i * i * i);
    }

    return 0;
}
