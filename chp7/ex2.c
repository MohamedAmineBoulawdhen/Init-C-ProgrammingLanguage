#include <stdio.h>
int special_chars(int ch);

int main(void)

{
    int x;
    printf("please enter a some characters, and ctrl + d to quit\n");

    special_chars(x);

    return 0;
}

int special_chars(int ch)

{
    int pairsNum = 0;

    while ((ch = getchar()) != EOF) // testing charecters while not end of file.
    {

        if (ch == '\n') // testing if a control charecter, and printing its
        {
            printf("\\n ");
            pairsNum++;
        }

        else if (ch == '\t')
        {
            printf("\\t ");
            pairsNum++;
        }

        else
        {
            printf("%c,%d ", ch, ch);
            pairsNum++;
        }

        if (pairsNum == 10) // counting the number of outputs, and printing a newline when is 10 (limit).
            printf("\n");
    }
    return ch;
}