#include <stdio.h>
double cube_num(double nb);

int main(void)
{
    double nb;
    printf("enter a number: ");
    scanf("%lf", &nb);
    printf("the cubed of %f is %f\n", nb, cube_num(nb));
    return 0;
}
double cube_num(double nb)
{
    return nb * nb * nb;
}