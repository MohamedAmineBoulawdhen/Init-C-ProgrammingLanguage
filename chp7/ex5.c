#include <stdio.h>

#define STOP '#'

int main(void)
{
    char ch, inputchar[200];

    int count = 0, countSubstitutions;

    printf("enter input(%c to exit):\n", STOP);
    while ((ch = getchar()) != STOP)
    {
        inputchar[count] = ch;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        switch (inputchar[i])
        {
        case '.':
            printf("!");
            break;
        case '!':
            printf("!!");
            break;
        default:
            printf("%c", inputchar[i]);
        }
    }

    return 0;
}