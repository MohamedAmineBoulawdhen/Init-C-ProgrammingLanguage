#include <stdio.h>
int main(void)
{
    char firstName[100];
    char lastName[100];
    printf("Enter your first name\n");
    scanf("%s", firstName);
    printf("Enter your last name\n");
    scanf("%s", lastName);
    printf("%s,%s\n", lastName, firstName);
    return 0;
}