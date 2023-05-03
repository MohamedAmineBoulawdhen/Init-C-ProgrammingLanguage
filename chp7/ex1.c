#include <stdio.h>
int main(void)
{
    char ch;

    int nbSpaces, nbNewLine, nbOtherChar;
    nbSpaces = nbNewLine = nbOtherChar = 0;

    printf("write sentences, type in \'#\' to quit.\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            nbSpaces += 1;
            continue;
        }
        else if (ch == '\n')
        {
            nbNewLine += 1;
            continue;
        }
        else
            nbOtherChar += 1;
    }
    printf("%d %s,%d %s,%d other characters", nbSpaces, nbSpaces == 1 ? "space" : "spaces", nbNewLine, nbNewLine <= 1 ? "newline" : "newlines", nbOtherChar);

    return 0;
}