#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];

    printf("write the word: ");
    scanf("%s", arr);

    printf("\nThe backward of the word: ");
    for (int i = strlen(arr) - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }

    return 0;
}