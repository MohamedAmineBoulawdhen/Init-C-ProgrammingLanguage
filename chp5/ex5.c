#include <stdio.h>
int main(void)
{
    int value, i = 0, sum = 0;
    printf("enter value: ");
    scanf("%d", &value);
    while (value > 0)
    {
        while (i++ < value)
        {
            sum += i;
        }
        printf("sum is equal to: %d\n", sum);
        printf("enter another value:\n");
        printf("enter 0 to leave.\n");
        scanf("%d", &value);
        sum = i = 0;
    }
    printf("done\n");

    return 0;
}