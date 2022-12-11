#include<stdio.h>
#include<math.h>
int main()
{
    int triangularNumber = 0, naturalNumber = 0, divisors;
    
    while (1)
    {
        naturalNumber++;
        triangularNumber += naturalNumber;
        divisors = 0;
        for(int i = 1; i < (int)floor(sqrt(triangularNumber)); i ++)
        {
            if (triangularNumber % i == 0) divisors += 2;
            
            if ((int)floor(sqrt(triangularNumber)) * (int)floor(sqrt(triangularNumber)) == triangularNumber) divisors--;
        }
        if (divisors == 10)
        break;
    }
    printf("Triangle Number: %d Divisors: %d\n", triangularNumber, divisors);
    
}