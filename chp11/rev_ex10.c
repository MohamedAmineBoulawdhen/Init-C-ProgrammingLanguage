#include <stdio.h>
#define LINE 3
#define LEN 40

int str_len(char *str);
char *s_gets(char *, int);

int main(void)
{
    char input[LINE][LEN];
    int arr_len[LINE];
    char *ptstr[LINE];
    int i = 0;

    printf("Input up to %d lines,\nand I will calculate the length for each one of them.\n", LINE);
    printf("To stop, press the Enter key at a line's start.\n");
    while (i < LINE && s_gets(input[i], LEN) != NULL && input[i][0] != '\0')
    {
        ptstr[i] = input[i];
        arr_len[i] = str_len(input[i]);
        i++;
    }
    for (i = 0; i < LINE; i++)
    {
        printf("Length of input: %s is %d,\n", input[i], arr_len[i]);
    }

    return 0;
}

int str_len(char *str)
{
    return (strchr(str, '\0') - str);
}

char *s_gets(char *ptc, int n)
{
    char *ret_val;
    ret_val = fgets(ptc, n, stdin);
    if (ret_val)
    {
        while (*ptc != '\n' && *ptc != '\0')
            ptc++;
        if (*ptc == '\n')
            *ptc = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
