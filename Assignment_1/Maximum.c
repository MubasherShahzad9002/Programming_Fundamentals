#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter second Number : ");
    scanf("%d", &num2);
    if (num1 > num2){
        printf("%d is Maximum : ", num1);
    }
    else {
        printf("%d is Maximum : ", num2);
    }
    
    return 0;
}