#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstName[100];

    printf("Enter your first name\n");
    scanf("%s", firstName);
    printf("\"%s\"\n", firstName);
    printf("\"%20s\"\n", firstName);
    printf("\"%-20s\"\n", firstName);
    printf("\"%*s\"\n", strlen(firstName) + 3, firstName);

    return 0;
}