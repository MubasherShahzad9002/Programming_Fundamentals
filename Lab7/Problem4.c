#include <stdio.h>
#include <math.h>
float Amount(int Pages);
int main()
{
    int pages;
    float result;
    printf("Enter Number Of Pages:");
    scanf("%d", &pages);
    result = Amount(pages);
    printf("Your Total Bill: $%.1f\n", result);

    return 0;
}
float Amount(int Pages)
{
    float totalamount;
    int ServiceCharges = 3;
    if (Pages <= 10)
    {
        totalamount = 0.2 * Pages;
    }
    else if (Pages > 10)

    {
        totalamount = 2 + ((Pages - 10) * 0.10);
    }
    totalamount += ServiceCharges;
    return totalamount;
}