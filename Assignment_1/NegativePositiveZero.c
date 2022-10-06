#include<stdio.h>
int main() {
    int number1;
    printf("Enter a number : ");
    scanf("%d", &number1);
    if (number1 > 0) {
        printf("Number %d is positive. ", number1);
    }
    else if (number1 < 0) {
        printf("Number %d is negative. ", number1);
    }
    else {
        printf("Number is equal to zero. ");
    }
    return 0;
}