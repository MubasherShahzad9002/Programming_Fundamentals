#include <stdio.h>
int main()
{
    int per, base, hyp;

    printf("Enter Triangle Perpendicular = ");
    scanf("%d", &per);
   printf("Enter Triangle Base = ");
    scanf("%d", &base);
   printf("Enter Triangle Hypotenious = ");
    scanf("%d", &hyp);

    if (per==base && per==hyp && base==hyp)
    {
        printf("Equilateral Triangle\n");
    }

    else if (per==base || base==hyp || per==hyp)   
    {
        printf("Isoceles Triangle\n");
    }

    else
    {
         printf("Scalene Triangle\n");
    }
     


    return 0;
}