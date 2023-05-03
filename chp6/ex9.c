#include <stdio.h>
double calcul(double x, double y);
int main()
{
    double db1, db2;
    printf("Enter two numbers\n");
    printf("Enter the first number: ");
    scanf("%lf", &db1);
    printf("\nEnter the second number: ");
    scanf("%lf", &db2);
    do
    {
        printf("( %.2lf - %.2lf ) / ( %.2lf * %.2lf ) = %.10lf\n", db1, db2, db1, db2, calcul(db1, db2));
        printf("Enter the next pair with space in between(q to quit): ");
    } while (scanf("%lf", &db1) && scanf("%lf", &db2));
    printf("See you\n");
    return 0;
}

double calcul(double x, double y)
{

    return (x - y) / (x * y);
}
