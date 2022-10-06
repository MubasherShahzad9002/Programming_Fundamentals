#include<stdio.h>
int main(){
    int a, b, formula = 0;
    printf("Enter value of a = ");
    scanf("%d", &a);
    printf("Enter value of b = ");
    scanf("%d", &b);
    formula = (a*a*a) + (b*b*b) + 3*a*b*(a+b);
    printf("(%d+%d)^3 = %d\n", a, b, formula);

    return 0;
}