#include <stdio.h>
int main()
{
    char operation, choice;
    int num1, num2;
    do
    {

        printf("Enter Your First Number = ");
        scanf("%d", &num1);
        printf("Enter Your Second Number = ");
        scanf("%d", &num2);

        printf("For Addition Press 1\n");
        printf("For Subtractiom Press 2\n");
        printf("For Multiplication Press 3\n");
        printf("For Division Press 4\n");
        printf("Enter  Operation (+,-,*./) ");
        scanf("\n%c", &operation);

        switch (operation)
        {
        case '1':
            printf("%d\n", num1 + num2);
            break;
        case '2':
            printf("%d\n", num1 - num2);
            break;
        case '3':
            printf("%d\n", num1 * num2);
            break;
        case '4':
            printf("%d\n", num1 / num2);
            break;

        default:
            printf("Invalid Operator");
            break;
        }

        printf("Do You Want to Continue PRESS (Y/N)=");
        scanf("\n%c", &choice);

    } while (choice == 'Y' || choice == 'y');

    return 0;
}