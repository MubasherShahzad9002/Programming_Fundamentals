#include <stdio.h>

int main()
{

    int result, remainder, tempNumber, largest, mul;

    mul = 0;
    largest = 0;

    for (int i = 100; i <= 999; i++)
    {

        for (int j = 100; j < 999; j++)
        {
            // multiplying two 3 Digits Number and Storing in a variable
            mul = i * j;

            // Program to check weather  a number is Palindrome or Not so our Number is Product of two Digit Numbers
            tempNumber = mul;
            result = 0;
            while (tempNumber != 0)
            {
                remainder = tempNumber % 10;
                result = result * 10 + remainder;
                tempNumber = tempNumber / 10;
            }
            // Now Checking Is the Number After Reverse is = to Actual Number

            if (result == mul)
            {
                /* if reverse of a number is = actual Number then Check Our Variable Value is > that number or Not 
                If Not The Assign our Actual Number to That Variable */

                if (largest < mul)
                {
                    largest = mul;
                }
            }
        }
    }

    printf("The Product of Largest 3 Digists Number is: %d \n", largest);

    return 0;
}