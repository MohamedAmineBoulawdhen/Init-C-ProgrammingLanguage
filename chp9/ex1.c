#include <stdio.h>

double dbmin(double, double);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    while (scanf("%lf %lf", &x, &y) != 2)
    {
        while (getchar() != '\n')
            continue;
        printf("Enter two numbers, please: ");
    }
    printf("The smaller number of %.2lf and %.2lf is %.2lf.\n", x, y, dbmin(x, y));
    while (getchar() != '\n')
        continue;
    printf("Enter q to quit or c to continue: ");
    if (getchar() == 'q')
    {
        printf("Bye!");
    }
    else
    {
        while (getchar() != '\n')
            continue;
        main();
    }

    return 0;
}

double dbmin(double u, double v)
{
    return u > v ? v : u;
}
