#include <stdio.h>

void printCharfsttimesscdline(char, int, int);

int main(void)
{
    char ch;
    int nlines, ncharperline;

    printf("Enter two integers then a character separated by spaces(q to quit):\n");
    while (scanf("%d %d %c", &nlines, &ncharperline, &ch) == 3 && ch != 'q')
    {
        printCharfsttimesscdline(ch, nlines, ncharperline);
        printf("Enter two integers then a character separated by spaces(q to quit):\n");
        while (getchar() != '\n')
            ;
    }
    printf("Good Bye!");
    return 0;
}
void printCharfsttimesscdline(char ch, int nlines, int ncharperline)
{
    for (int l = 0; l < nlines; l++)
    {
        for (int c = 0; c < ncharperline; c++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}