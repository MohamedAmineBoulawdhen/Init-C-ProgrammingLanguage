#include <stdio.h>

int main()
{
    int row, ch1, i;
    char ch;

    printf("enter a character: ");
    scanf("%c", &ch);
    ch1 = ch - 'A';
    char clnps;
    for (row = 0; row < ch - 'A' + 1; row++)
    {

        for (i = ch1 - row; i >= 0; i--)
            printf(" ");

        for (clnps = 'A'; clnps <= 'A' + row; clnps++)
            printf("%c", clnps);
        for (char clnps2 = clnps - 2; clnps2 >= 'A'; clnps2--)
            printf("%c", clnps2);
        printf("\n");
    }

    return 0;
}