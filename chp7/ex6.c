#include <stdio.h>

#define STOP '#'

int main(void)
{
    char ch, inputchar[200];

    int count = 0, countSequenceei = 0;

    printf("enter input(%c to exit):\n", STOP);
    while ((ch = getchar()) != STOP)
    {
        inputchar[count] = ch;
        count++;
    }
    for (int i = 1; i < count; i++)
    {
        if (inputchar[i] == 'i' && inputchar[i - 1] == 'e')
            countSequenceei++;
    }
    printf("the number of times that the sequence ei occurs is %d.\n", countSequenceei);

    return 0;
}