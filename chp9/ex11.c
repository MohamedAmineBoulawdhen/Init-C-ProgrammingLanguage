#include <stdio.h>

unsigned long Fibonacci(unsigned n);

int main(void)
{
    int n = 9;
    printf("Fibonacci number of %d is %d.", n, Fibonacci(n));
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    int f[n + 2];
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}