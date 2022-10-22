#include <stdio.h>
int main()
{
    // Declaring 3 integer datatype variables as x , y, z
    int x, y, z;
    // Take input values for variables from user and print 
    printf("Enter First Odd Number: ");
    scanf("%d", &x);
    printf("Enter Second Odd Number: ");
    scanf("%d", &y);
    printf("Enter Third Odd Number: ");
    scanf("%d", &z);
    // conditions to check which odd number is largest among three odd numbers 
    if (x > y && x > z && x % 2 != 0)
    {
        printf("%d is the largest odd number among them.\n", x);
    }
    else if (y > x && y > z && y % 2 != 0)
    {
        printf("%d is the largest odd number among them.\n", y);
    }
    else if (z > x && z > y && z % 2 != 0)
    {
        printf("%d is the largest odd number among them.\n", z);
    }
    else
        printf("User Entered the positive number so none of them is odd.\n");
    return 0;
}