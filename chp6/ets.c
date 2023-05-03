#include <stdio.h>
#include <string.h>
int main(void)
{
    int letters;
    char display[255];

    printf("enter a line:\n");
    scanf("&#37;s", display);

    letters = (int)strlen(display);
    letters -= 1;

    while (letters >= 0)
    {
        printf("%c", display[letters]);
        --letters;
    }

    printf("\n");

    return 0;
}