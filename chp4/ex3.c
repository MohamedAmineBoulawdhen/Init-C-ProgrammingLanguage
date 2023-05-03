#include <stdio.h>
#include <string.h>
int main(void)
{
    float flt;

    printf("Enter a floating-point number\n");
    scanf("%f", &flt);
    printf("decimal-point notation: %f\n", flt);
    printf("exponential notation: %e\n", flt);
    return 0;
}