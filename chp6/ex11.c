#include <stdio.h>
int main(void)
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        printf("\nEnter the element %d of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}