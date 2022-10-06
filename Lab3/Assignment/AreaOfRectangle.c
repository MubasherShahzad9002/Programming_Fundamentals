#include<stdio.h>
int main(){
    float length, width;
    float area;
    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the width : ");
    scanf("%f", &width);
    area = length * width;
    printf("Area %.2f = ", area);
    return 0;

}