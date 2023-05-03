#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter an integer");
    scanf("%d", &i);
    // NB:12 IS SPACE
    printf("the character having that ASCII code of %d is %c", i, i);

    return 0;
}