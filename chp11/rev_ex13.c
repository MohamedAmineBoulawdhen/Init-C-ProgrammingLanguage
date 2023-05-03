#include <stdio.h>
#include <string.h> // declares strcmp()
#include <ctype.h>

#define ANSWER "GRANT"
#define SIZE 40

char *s_gets(char *st, int n);
char *ToUpper(char *);

int main(void)
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(ToUpper(try), ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

char *ToUpper(char *ptr)
{
    char *return_val = ptr;
    while (*ptr)
    {
        *ptr = toupper(*ptr);
        ptr++;
    }
    return return_val;
}
