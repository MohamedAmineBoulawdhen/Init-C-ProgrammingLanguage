#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch, lower_case = 0, upper_case = 0, other_char = 0;
    printf("Enter input:\n");
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
            lower_case++;
        else if (isupper(ch))
            upper_case++;
        else // ascii control characters
            other_char++;
    }

    printf("lower_case: %d upper_case: %d other:%d\n", lower_case, upper_case, other_char);

    return 0;
}