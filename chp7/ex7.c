#include <stdio.h>

#define PAYRATE 10.
#define OVERTIMEEQUIVALENT 1.5
#define TAXRATE1 0.15
#define TAXRATE2 0.2
#define TAXRATE3 0.25
#define BREAKPOINT1 300
#define BREAKPOINT2 450
#define BASE1 TAXRATE1 *BREAKPOINT1
#define BASE2 (BASE1 + (TAXRATE2 * (BREAKPOINT2 - BREAKPOINT1)))

int main(void)
{
    float hours_per_week;
    double taxes, net_pay, basic_pay;
    printf("Please enter the number of hours per week.\n");
    scanf("%f", &hours_per_week);
    basic_pay = hours_per_week > 40 ? (hours_per_week - 40) * OVERTIMEEQUIVALENT * PAYRATE + 40 * PAYRATE : hours_per_week * PAYRATE;
    if (basic_pay <= BREAKPOINT1)
        taxes = TAXRATE1 * basic_pay;
    else if (basic_pay <= BREAKPOINT2)
        taxes = BASE1 + (TAXRATE2 * (basic_pay - BREAKPOINT1));
    else
        taxes = BASE2 + (TAXRATE3 * (basic_pay - BREAKPOINT2));
    net_pay = basic_pay - taxes;
    printf("Your gross pay is %f per week.\nThe charge for %.1f hours per week is $%.2f.\nYou end up with income equal to $%.2f", basic_pay, hours_per_week, taxes, net_pay);
    return 0;
}