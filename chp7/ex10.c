#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define Price_ARTICHOKE_PER_POUND 2.05
#define Price_BEET_PER_POUND 1.15
#define Price_CARROT_PER_POUND 1.09
#define DISCOUNT 0.05
#define COST_SHIPPING_5_POUND_OR_LESS 6.5
#define COST_SHIPPING_BETWEEN_5_AND_20_POUND 14.
#define COST_SHIPPING_PER_POUNDS_OVER_20_POUND 0.5

int main(void)
{
    char ch;
    float weight_artichoke, weight_beet, weight_carrot, weight; // weight are used for two reason one for testing entered values and the other for the sum of all weights
    weight_artichoke = weight_carrot = weight_beet = weight = 0.0;

    float cost_artichoke, cost_beet, cost_carrot;
    cost_artichoke = cost_beet = cost_carrot = 0.0;
    bool display_artichoke, display_beet, display_carrot; // flags
    display_artichoke = display_beet = display_carrot = false;
    float cost_total = 0, cost_after_discount = 0, shipping_charge = 0, cost_final = 0;

    printf("*************************************************\n");
    printf("Please enter your order.First select a vegetable \n");
    printf("then type in the pounds desired.\n");
    printf("a) Artichoke\t\t\tb) Beets\n");
    printf("c) Carrot\t\t\tq) quit\n");
    printf("*************************************************\n");
    printf("The selected vegetable: ");

    while ((ch = getchar()) != 'q')
    {
        while (ch == '\n') // try A without these two lines you will get try another two times
            ;
        switch (ch)
        {
        case 'a':
            printf("Enter the pounds desired(number required): ");
            scanf("%f", &weight);
            if (weight == 0)
            {
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Number required.Nothing change try again.\n");
                printf("Try another choice: ");
                break;
            }
            else if ((weight_artichoke += weight) > 0)
            {
                display_artichoke = true;
                printf("You have now %.2f pounds of artichoke.\n", weight_artichoke);
                weight = 0;
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Try another choice: ");
                break;
            }
            else
            {
                display_artichoke = false;
                weight_artichoke = 0;
                printf("You have now %.2f pounds of artichoke.\n", weight_artichoke);
                weight = 0;
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Try another choice: ");
                break;
            }
        case 'b':
            printf("Enter the pounds desired(number required): ");
            scanf("%f", &weight);
            if (weight == 0)
            {
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Number required.Nothing change try again.\n");
                printf("Try another choice: ");
                break;
            }
            else if ((weight_beet += weight) > 0)
            {
                display_beet = true;
                printf("You have now %.2f pounds of beet.\n", weight_beet);
                weight = 0;
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Try another choice: ");
                break;
            }
            else
            {
                display_beet = false;
                weight_beet = 0;
                printf("You have now %.2f pounds of beet.\n", weight_beet);
                weight = 0;
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Try another choice: ");
                break;
            }
        case 'c':
            printf("Enter the pounds desired(number required): ");
            scanf("%f", &weight);
            if (weight == 0)
            {
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Number required.Nothing change try again.\n");
                printf("Try another choice: ");
                break;
            }
            else if ((weight_carrot += weight) > 0)
            {
                display_carrot = true;
                printf("You have now %.2f pounds of carrot.\n", weight_carrot);
                weight = 0;
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Try another choice: ");
                break;
            }
            else
            {
                display_artichoke = false;
                weight_artichoke = 0;
                printf("You have now %.2f pounds of artichoke.\n", weight_artichoke);
                weight = 0;
                while ((ch = getchar()) != '\n')
                    ;
                // DON'T RETURN TAKE LAST FAULTY CHARACHTER
                printf("Try another choice: ");
                break;
            }

        default:
            printf("Try another choice: ");
            while ((ch = getchar()) != '\n')
                ;
            // DON'T RETURN TAKE LAST FAULTY CHARACHTER
            break;
        }
    }
    //================================================================Calcul
    weight = weight_artichoke + weight_beet + weight_carrot;
    cost_artichoke = (weight_artichoke > 0) ? weight_artichoke * Price_ARTICHOKE_PER_POUND : weight_artichoke;
    cost_beet = (weight_beet > 0) ? weight_beet * Price_BEET_PER_POUND : weight_beet;
    cost_carrot = (weight_carrot > 0) ? weight_carrot * Price_CARROT_PER_POUND : weight_carrot;
    cost_total = cost_artichoke + cost_beet + cost_carrot;
    cost_after_discount = (cost_total >= 100) ? cost_total - cost_total * DISCOUNT : cost_total;
    if (weight <= 5)
    {
        shipping_charge = COST_SHIPPING_5_POUND_OR_LESS * weight;
    }
    else if (weight > 5 && weight < 20)
    {
        shipping_charge = COST_SHIPPING_BETWEEN_5_AND_20_POUND * weight;
    }
    else
    {
        shipping_charge = COST_SHIPPING_PER_POUNDS_OVER_20_POUND * (weight - 20) + COST_SHIPPING_BETWEEN_5_AND_20_POUND * 20;
    }
    cost_final = cost_after_discount + shipping_charge;

    //================================================================Calcul
    ////////////////////////////////output
    printf("*************************************************\n");
    if (display_artichoke)
    {
        printf("The cost per pound of artichoke is $%.2f.\n", Price_ARTICHOKE_PER_POUND);
        printf("%.2f pounds of artichoke costs you $%.2f.\n", weight_artichoke, cost_artichoke);
    }
    if (display_beet)
    {
        printf("The cost per pound of beet is $%.2f.\n", Price_BEET_PER_POUND);
        printf("%.2f pounds of beet costs you $%.2f.\n", weight_beet, cost_beet);
    }
    if (display_carrot)
    {
        printf("The cost per pound of carrot is $%.2f.\n", Price_CARROT_PER_POUND);
        printf("%.2f pounds of carrot costs you $%.2f.\n", weight_carrot, cost_carrot);
    }
    printf("The total cost is $%.2f.\n", cost_total);
    printf("The total cost after discount is $%.2f.\n", cost_after_discount);
    printf("The shipping charge is $%.2f.\n", shipping_charge);
    printf("The grand total of all the charges is $%.2f.\n", cost_final);
    printf("HAVE A NICE DAY !");

    ////////////////////////////////output
    return 0;
}
