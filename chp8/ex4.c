#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    bool in_word = false;
    int ch;
    int nb_word = 0, nb_char = 0;
    printf("Enter input:\n");
    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))
            continue;
        if (isalnum(ch))
        {
            nb_char++;
            in_word = true;
            continue;
        }
        if (in_word)
        {
            nb_word++;
        }
        if (isspace(ch))
        {
            in_word = false;
        }
    }

    printf("the average number of letters per word: %.2f\n", (float)nb_char / nb_word);

    return 0;
}