#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    int sum;
    float average;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);
    printf("Enter Third Number : ");
    scanf("%d", &num3);
    sum = num1+num2+num3;
    printf("Sum Of Three Numbers are : %d\n", sum);
    average = sum/3;
    printf("Average : %.0f\n", average);


    return 0;

}