#include <stdio.h>

int main(void)
{
    int sec_operand, first_operand;
    printf("enter the second operand: ");
    scanf("%d", &sec_operand);
    printf("enter the first operand: ");
    scanf("%d", &first_operand);
    while (first_operand > 0)
    {
        printf("%d %% %d is %d.\n", first_operand, sec_operand, first_operand % sec_operand);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &first_operand);
    }
    printf("Done\n");

    return 0;
}
