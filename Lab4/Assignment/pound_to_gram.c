#include<stdio.h>
int main(){
    float pound, grams;
    printf("Enter weight in pounds = ");
    scanf("%f",&pound);
    grams = pound * 453.592;
    printf("Weight of %.2f Pounds is = %.3f Grams\n", pound,grams);

    return 0;
}