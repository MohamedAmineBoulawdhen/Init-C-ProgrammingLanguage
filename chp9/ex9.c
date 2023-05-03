#include <stdio.h>
#include <stdbool.h>
#include <string.h>

double powercrea(double, int);

int main()
{
    int y;
    double x;
    printf("Enter a number and an integer to which\nit will be raised(q to quit):\n");
    while (scanf("%lf %d", &x, &y) == 2)
    {
        printf("%.2g to the power of %d is %.2g.\n", x, y, powercrea(x, y));
        printf("Enter a number and an integer to which\nit will be raised(q to quit):\n");
    }
    printf("Good bye!");
    return 0;
}

double powercrea(double x, int y)
{
    if (x == 0 && y != 0)
        return 0;
    else if (y == 0)
        return 1;
    else if (y < 0)
        return (1. / x) * powercrea(x, y + 1);
    else
        return x * powercrea(x, y - 1);
}
