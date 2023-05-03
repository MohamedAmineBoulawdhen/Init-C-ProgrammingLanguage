#include <stdio.h>
int main(void)
{
    int arr[8], sum = 1;
    for (int i = 0; i < 8; i++)
    {
        sum *= 2;
        arr[i] = sum;
        printf("%d ", arr[i]);
    }
    printf("\nDone!");
    return 0;
}