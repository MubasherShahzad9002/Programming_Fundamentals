#include<stdio.h>
int main(){
    float length, width, height;
    float volume;
    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the width : ");
    scanf("%f", &width);
    printf("Enter the height : ");
    scanf("%f", &height);

    volume = length * width * height;
    printf("Volume %.2f = ", volume);
    return 0;

}