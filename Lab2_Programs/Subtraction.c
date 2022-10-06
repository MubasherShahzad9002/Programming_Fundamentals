#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);
    sum = num1-num2;
    printf("Subtraction Of Two Numbers are : %d\n", sum);
    return 0;

}