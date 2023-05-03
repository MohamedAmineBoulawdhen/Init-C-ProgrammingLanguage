#include <stdio.h>

int main(void)
{
    int i;

    i = 2147483647 + 1;
    float toobig = 3.4E38 * 100.0f;
    double toosmall = 0.1234E-10 * 0.01;

    printf("overflow %e \n", toobig);
    printf("underflow %e \n", toosmall);
    printf("size of int is %zd bytes", sizeof(i));
    printf("\n the overflow of int is  %d", i);
    printf("\n size of int is %zd", sizeof(int));

    return 0;
}