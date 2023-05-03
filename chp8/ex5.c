#include <stdio.h>
int low_limit = 0, high_limit = 100;
int guessnb = 100 / 2;
int guess(void);
int main(void)
{

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guessnb);
    while (getchar() != 'y') /* get response, compare to y */
    {

        while (getchar() != '\n')
            continue; /* skip rest of input line */
        printf("Uh...is your number %d?\n", guess());
    }
    printf("I knew I could do it!\n");
    return 0;
}

int guess(void)
{
    char ch;
    printf("Is my guess low or high?\n");
    if ((ch = getchar()) == 'h')
    {
        high_limit = guessnb;
        guessnb = (high_limit - low_limit) / 2;
        while (getchar() != '\n')
            continue;
    }
    else
    {
        low_limit = guessnb;
        guessnb = (high_limit - low_limit) / 2;
        while (getchar() != '\n')
            continue;
        high_limit = high_limit - guessnb * 2;
    }
    return guessnb;
}
