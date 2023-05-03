#include <stdio.h>

int main(void)
{
    const int days_in_week = 7;
    int days, weeks, remaining_days;

    printf("enter the number of days that you want to convert to weeks and days\n");
    scanf("%d", &days);
    while (days > 0)
    {
        weeks = days / days_in_week;
        remaining_days = days % days_in_week;
        printf("%d days are %d weeks, %d days.\n", days, weeks, remaining_days);
        printf("Enter the number of days\n");
        printf("Type 0 or less to leave the program\n");
        scanf("%d", &days);
    }

    return 0;
}