#include <stdio.h>
#include <string.h>
int main(void)
{
    char arr1[255];
    printf("write something:\n");
    scanf("%[ a-zA-Z]", arr1);
    for (int i = strlen(arr1) - 1; i >= 0; i--)
    {
        printf("%c", arr1[i]);
    }

    return 0;
}