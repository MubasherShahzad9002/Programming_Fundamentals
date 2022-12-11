#include <stdio.h>
int main()
{
    char membership;
    int fee;
    int age;

    printf("Enter age of the user: ");
    scanf("%d", &age);
    printf("Enter M or m for Membership and N or n for Non-membership: ");
    scanf("\n%c", &membership);   

    // if club member has membership and his age is less than or equal or greater than 65 then following conditions will work.
    if (membership == membership && membership == 'M' || membership == 'm')
    {
        if (age < 65)
        {
            fee = 10;
            printf("Cost $10 Seminar Fee for Club Members less than 65 years old.\n");
        }

        else if (age >= 65)
        {
            fee = 5;
            printf("Cost $5 Seminar fee for Club members atleast 65 years old.\n");

        }
    }
    // if club member has no membership and his age is less than or equal to 65 then following conditions will work.
    else if (membership == membership && membership == 'N' || membership == 'n')
    {
        if (age <= 65)
        {
            fee = 20;
        }
        printf("It Cost $20 Seminar fee for Non Members of club.\n");
    }

    return 0;
}