#include <stdio.h>
#define minutes_in_hours 60

int main(void)
{
    int mn, hours, remainingMn;
    printf("enter minutes to get converted to hours and minutes\n");
    scanf("%d", &mn);
    while (mn > 0)
    {
        hours = mn / minutes_in_hours;
        remainingMn = mn % minutes_in_hours;

        printf("the total number of minutes is %d minutes.\nConsequently, it is %d hours and %d minutes.\n", mn, hours, remainingMn);
        printf("Try it again!\n");
        printf("if you want to leave type 0 or less!\n");
        scanf("%d", &mn);
    }
    printf("bye!");
    return 0;
}
