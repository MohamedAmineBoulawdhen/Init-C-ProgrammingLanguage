#include <stdio.h>
int main(void)
{
    double arr1[8], arr2[8];
    int sum = 1, i;
    printf("enter the 8 number of first array: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &arr1[i]);
    }
    for (i = 1, arr2[0] = arr1[0]; i < 8; i++)
    {
        arr2[i] = arr1[i] + arr2[i - 1];
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%3.lf ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%3.lf ", arr2[i]);
    }

    return 0;
}