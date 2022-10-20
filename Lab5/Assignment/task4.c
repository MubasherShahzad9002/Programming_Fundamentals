#include <stdio.h>
int main()
{
    int num1, num2;
    char operator;
    printf("Enter Your First integer = ");
    scanf("%d", &num1);
    printf("Enter Your Second integer = ");
    scanf("%d", &num2);
    printf("Enter Operators (+,-,*,/,%%): ");
    scanf("\n%c", &operator);
    // if Condition Starts

    if (operator== '+')
    {
        printf("Additiom is  %d\n", num1 + num2);
    }

    else if (operator== '-')
    {
        printf("Subtraction is  %d\n", num1 - num2);
    }

    else if (operator== '*')
    {
        printf("Multiplication is  %d\n", num1 * num2);
    }
    else if (operator== '/')
    {
        printf("Division is  %d\n", num1 / num2);
    }
    else if (operator== '%')
    {
        printf("Modulus is  %d\n", num1 % num2);
    }

    else
    {
        printf("\nInvalid Operator\n");
    }

    return 0;
}