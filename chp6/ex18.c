#include <stdio.h>

int main(void)
{
    int friends = 5;
    const int DUNBAR = 150;
    int weeks = 1;
    while (friends < DUNBAR)
    {
        friends -= weeks;
        friends *= 2;
        printf("Weeks= %d,freinds=%d\n", weeks, friends);
        weeks++;
    }

    return 0;
}