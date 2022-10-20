#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter Your First integer = ");
    scanf("%d", &num1);
    printf("Enter Your Second integer = ");
    scanf("%d", &num2);


    if (num1 < num2)
    {
        printf("Second Integer %d is Greater than First integer %d\n", num2, num1);
    }
    else if (num1 > num2)
    {
        printf("First Integer %d is Greater than Second integer %d\n", num1, num2);
    }
    else
    {
        printf("Integers are Equal.\n");
    }

    return 0;
}