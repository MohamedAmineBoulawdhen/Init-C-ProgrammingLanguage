#include <stdio.h>
int main(void)
{
    int st;
    printf("Enter a field width:\n");
    scanf("%d", &st);
    printf("The last integer was %6.4d\n", st);
    return 0;
}
