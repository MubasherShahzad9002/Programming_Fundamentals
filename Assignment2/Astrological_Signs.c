/*
Write a program to ask a user to enter the date of birth and on the basis of
input it display astrological sign associate with it.*/

#include <stdio.h>
int main()
{
    int day, month;

    printf("Enter the day of birth: 1 to 31 = ");
    scanf("%d", &day);

    printf("Enter the month of birth: ");
    scanf("%d", &month);

    // for Capricorn
    if (month == 12 && day >= 22 && day <= 31 || month == 1 && day <= 19 && day > 0)
    {
        printf("Your Astrological Sign is: Capricorn (CAP).\n");
    }

    // for Aquarius
    else if (month == 1 && day >= 20 && day <= 31 || month == 2 && day <= 19 && day > 0)
    {
        printf("Your Astorlogical Sign is: Aquarius (AQU).\n");
    }

    // for Pisces
    else if (month == 2 && day >= 20 && day <= 29 || month == 3 && day <= 20 && day > 0)
    {
        printf("Your Astrological Sign is: Pisces (PIS).\n");
    }

    // for Aries
    else if (month == 3 && day >= 21 && day <= 31 || month == 4 && day <= 20 && day > 0)
    {
        printf("Your Astrological Sign is: Aries (ARI).\n");
    }

    // for Taurus
    else if (month == 4 && day >= 21 && day <= 30 || month == 5 && day <= 20 && day > 0)
    {
        printf("Your Astrological Sign is: Taurus (TAU).\n");
    }

    // for Gemini
    else if (month == 5 && day >= 21 && day <= 31 || month == 6 && day <= 20 && day > 0)
    {
        printf("Your Astrological Sign is: Gemini (GEM).\n");
    }

    // For Cancer
    else if (month == 6 && day >= 21 && day <= 30 || month == 7 && day <= 22 && day > 0)
    {
        printf("Your Astrological Sign is: Cancer (CAN).\n");
    }

    // for Leo
    else if (month == 7 && day >= 23 && day <= 31 || month == 8 && day <= 22 && day > 0)
    {
        printf("Your Astrological Sign is: Leo (LEO).\n");
    }

    // for Virgo
    else if (month == 8 && day >= 23 && day <= 31 || month == 9 && day <= 22 && day > 0)
        printf("Your Astrological Sign is: Virgo (VIR).\n");

    // for Libra
    else if (month == 9 && day >= 23 && day <= 30 || month == 10 && day <= 22 && day > 0)
    {
        printf("Your Astrological Sign is: Libra (LIB).\n");
    }

    // for Scorpio
    else if (month == 10 && day >= 23 && day <= 31 || month == 11 && day <= 22 && day > 0)
    {
        printf("Your Astrological Sign is: Scorpio (SCO).\n");
    }

    // for Sagittarius
    else if (month == 11 && day >= 23 && day <= 30 || month == 12 && day <= 21 && day > 0)
    {
        printf("Your Astrological Sign is: Sagittarius (SAG).\n");
    }
    else
    {
        printf("Invalid Birth date entered\n");
    }

    return 0;
}