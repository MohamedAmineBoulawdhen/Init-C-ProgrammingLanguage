#include <stdio.h>
int main(void)
{
    const float inches_in_centimeter = 2.54;
    const float feet_in_centimeter = 30.48;
    float inches, feet, centimeters;
    printf("enter your height in centimeters: ");
    scanf("%.f", &centimeters);
    while (centimeters > 0)
    {
        inches = centimeters / inches_in_centimeter;
        feet = centimeters / feet_in_centimeter;
        printf("%f\n", feet);
        printf("%.1f cm = %.lf feet, %.1f inches.\n", centimeters, feet, inches);
        printf("enter your height in centimeters:\n");
        printf("type 0 to leave the program\n");
        scanf("%f", &centimeters);
    }
    printf("done\n");

    return 0;
}