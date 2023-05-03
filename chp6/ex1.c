#include <stdio.h>
int main(void)
{
    char k[26];
    for (int i = 'a', j = 0; j < 26; i++, j++)
    {
        k[j] = i;
        printf("%c", k[j]);
    }

    return 0;
}