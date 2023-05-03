#include <stdio.h>

int main(void)
{
    int age;
    printf("your age in years:");
    scanf("%d", &age);
    long double eqag = age * 3.156e7;
    printf("your age in years is equivalent in seconds to: %Le seconds", eqag);

    return 0;
}