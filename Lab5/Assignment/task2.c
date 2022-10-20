#include <stdio.h>
int main()
{

    int num1, num2, num3;

    printf("Enter Your First integer = ");
    scanf("%d", &num1);
    printf("Enter Your Second integer = ");
    scanf("%d", &num2);
    printf("Enter Your First integer = ");
    scanf("%d", &num3);

    // if Condition Starts

    if (num2 > num1 && num2 > num3)
    {
        printf("Second Integer %d is Greater than First integer %d & Third Integer %d \n", num2, num1, num3);
    }

    else if (num1 > num2 && num1 > num3)
    {
        printf("First Integer %d is Greater than Second integer %d & Third Integer %d \n", num1, num2, num3);
    }

    else if (num3 > num2 && num3 > num1)
    {
        printf("Third Integer %d is Greater than Second integer %d & First Integer %d \n", num3, num2, num1);
    }

    else
    {
        printf("All Three Integers are Equal.\n");
    }

    // if condition Ends

    return 0;
}