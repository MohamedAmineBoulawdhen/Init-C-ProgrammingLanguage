#include <stdio.h>

int main(void)
{
    int value, lgValue;
    printf("enter a value\n");
    scanf("%d", &value);
    lgValue = value + 10;
    value--;
    while (value++ < lgValue)
    {
        printf("%-6d", value);
    }
    printf("\ndone");
    return 0;
}