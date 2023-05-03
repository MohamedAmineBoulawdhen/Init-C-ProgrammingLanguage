#include <stdio.h>
#include <string.h>
#define liters_per_gallon 3.785
#define kilometers_one_mile 1.609

int main(void)
{
    float miles, gallons, miles_per_gallon, liters_per_100_km;

    printf("enter the number of miles traveled\n");
    scanf("%f", &miles);
    printf("enter the number of gallons of gasoline consumed\n");
    scanf("%f", &gallons);
    miles_per_gallon = miles / gallons;
    printf("miles-per-gallon value is % f\n", miles_per_gallon);
    liters_per_100_km = ((1 / (miles_per_gallon * kilometers_one_mile)) * liters_per_gallon) * 100;
    printf("liters-per-100-km value is %f\n", liters_per_100_km);

    return 0;
}