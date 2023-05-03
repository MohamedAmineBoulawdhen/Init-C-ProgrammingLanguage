#include <stdio.h>
void to_base_n(unsigned long n, int base);
int main(void)
{
    unsigned long number;
    int base;
    printf("Enter an integer and the base(q to quit):\n");
    while (scanf("%lu %d", &number, &base) == 2)
    {
        while (base < 2 || base > 10)
        {
            printf("The base must be between 2 and 10:\n");
            scanf("%d", &base);
        }

        printf("The base-%d equivalent of %lu is ", base, number);
        to_base_n(number, base);
        putchar('.\n');
        printf("Enter an integer and the base(q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}
void to_base_n(unsigned long n, int base) /* recursive function */
{
    int r;
    r = n % base;
    if (n >= base)
        to_base_n(n / base, base);
    switch (r)
    {
    case 0:
        putchar('0');
        break;
    case 1:
        putchar('1');
        break;
    case 2:
        putchar('2');
        break;
    case 3:
        putchar('3');
        break;
    case 4:
        putchar('4');
        break;
    case 5:
        putchar('5');
        break;
    case 6:
        putchar('6');
        break;
    case 7:
        putchar('7');
        break;
    case 8:
        putchar('8');
        break;
    case 9:
        putchar('9');
        break;
    case 10:
        putchar('10');
        break;
    default:
        break;
    }

    return;
}