#include<stdio.h>
int main(){
    float feet,inches;
    printf("Enter length in feet = ");
    scanf("%f", &feet);
    inches = feet * 12;
    printf("Length of %.2f feet is = %.2f inches\n", feet, inches);
    return 0;
}