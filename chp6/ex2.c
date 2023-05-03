#include <stdio.h>

int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int cln = 0; cln <= row; cln++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}