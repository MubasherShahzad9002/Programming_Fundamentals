#include<stdio.h>
int main(){
    int celcius, fahrenheit;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%d", &fahrenheit);
    // formula to convert fahrenheit to celcius
    celcius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celcius = %dC\n", celcius); 

    return 0;
}