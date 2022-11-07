// Write a C program that prints the following patterns separately one below the other.
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, r;

    printf("Enter Number of Rows:");
    scanf("%d", &r);

    printf("Program 1\n\n");
    for (i = 1; i <= r; i++)
    {

        for (j = i; j < r; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\nProgram 2\n\n");
    for (i = 1; i <= r; i++)
    {

        for (j = i; j <= r; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}