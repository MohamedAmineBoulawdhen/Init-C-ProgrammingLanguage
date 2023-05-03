#include <stdio.h>
#include <string.h>
#define centToMeters 0.01
int main(void)
{
    float flt;
    char name[100];

    printf("Enter your height en centimeters\n");
    scanf("%f", &flt);
    printf("Enter a Name\n");
    scanf("%s", name);
    printf("%s, you are %.3f meters tall\n", name, flt * centToMeters);

    return 0;
}