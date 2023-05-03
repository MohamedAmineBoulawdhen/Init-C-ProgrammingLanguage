#include <stdio.h>

int main()
{
    int cln;
    char ch;
    for (int row = 0; row < 6; row++)
    {
        for (cln = 0, ch = 'F'; cln <= row; cln++, ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}