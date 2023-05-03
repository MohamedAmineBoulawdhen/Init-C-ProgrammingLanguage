#include <stdio.h>

int main(void)
{
    float cent_to_inch = 2.54;
    int height;
    printf("your height");
    scanf("%d", &height);
    printf("your height in inches: %f inches", cent_to_inch * height);

    return 0;
}