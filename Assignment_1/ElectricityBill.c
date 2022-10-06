#include <stdio.h>

int main()
{
    int unit;
    float amount, total_amount, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed : ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amount = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amount = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amount = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amount = 220 + ((unit-250) * 1.50);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amount * 0.20;
    total_amount  = amount + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amount);

    return 0;
}