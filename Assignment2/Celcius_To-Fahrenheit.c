#include<stdio.h>
int main(){
    // Decalring two variables as celcius and fahrenheit
    int celcius, fahrenheit;
    printf("Enter Temperature in Celcius : ");
    scanf("%d", &celcius);
    // Formula to convert celcius to fahrenheit
    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in Fahrenheit = %dF\n", fahrenheit); 

    return 0;
}