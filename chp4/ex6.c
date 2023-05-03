#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[100];
    char lastName[100];
    printf("Enter your first name\n");
    scanf("%s", firstName);
    printf("Enter your last name\n");
    scanf("%s", lastName);
    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));
    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));

    return 0;
}