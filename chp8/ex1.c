#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, count = 0;
    printf("type sentence.\n");
    while ((ch = getchar()) != EOF && isprint(ch))
    {
        count++;
    }
    printf("The number of characters is %d\n", count);
    return 0;
}