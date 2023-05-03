#include <stdio.h>

int main(void)
{
    int number;
    printf("enter positive number:\n");
    while (scanf("%d", &number) != 1 || number < 0)
    {
        printf("Positive number only accepted:\n");
    }
    printf("Prime number:\n");
    if (number > 3)
    {
        printf("%d %d ", 2, 3);
    }
    if (number == 2)
    {
        printf("%d ", 2);
    }
    for (int i = 2; i <= number; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j != 0 && j == i / 2)
                printf("%d ", i);
            else if (i % j == 0)
                break;
            else
                continue;
        }
    }

    return 0;
}