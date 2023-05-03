#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_character(char ch);
int alpha_num_loc(char ch);

int main()
{
    char ch;
    printf("Enter a character:\n");
    while ((ch = getchar()) != EOF)
    {
        if (isspace(ch))
        {
            continue;
        }
        else if (is_character(ch))
        {
            printf("\'%c\' is a letter, its numerical location in the alphabet is: %d.\n", ch, alpha_num_loc(ch));
        }
        else
        {
            printf("\'%c\' is not a letter.\n", ch);
        }
    }
    printf("Good bye!");
    return 0;
}

bool is_character(char ch)
{
    return isalpha(ch);
}

int alpha_num_loc(char ch)
{
    if (islower(ch))
        return ch - 96;
    else
        return ch - 64;
}
