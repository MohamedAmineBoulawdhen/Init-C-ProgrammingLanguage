#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int i = 5, j = 9;

    printf("Enter a character and two integers: ");
    while (scanf("%c %d %d", &ch, &i, &j) == 3)
    {
        chline(ch, i, j);
        printf("\n");

        while (getchar() != '\n')
            continue; // clear input

        printf("Enter a character and two integers: ");
    }

    return 0;
}
void chline(char ch, int i, int j)
{
    for (int k = 0; k < j; k++)
    {
        if (k >= i)
        {
            printf("%c", ch);
        }
        else
            printf(" ");
    }
}