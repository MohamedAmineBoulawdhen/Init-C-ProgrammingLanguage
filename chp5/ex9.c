#include <stdio.h>
int Temp(double celsius);

int main(void)
{
    double celsius;
    printf("Temperature in celsius: ");
    while (scanf("%lf", &celsius))
    {
        Temp(celsius);
        printf("enter the next temperature in celsius: ");
    }
    printf("Done\n");
    return 0;
}

int Temp(double celsius)
{
    double kelvin, fahrenheit;
    const double f1 = 5. / 9., f2 = 32., k1 = 273.16;
    kelvin = celsius + k1;
    fahrenheit = celsius / f1 + f2;
    printf("Temperature in celsius is %lf,in fahrenheit is %lf and kelvin is %lf\n", celsius, fahrenheit, kelvin);

    return 0;
}
