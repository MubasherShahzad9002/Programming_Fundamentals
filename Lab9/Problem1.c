#include <stdio.h>
int main()
{
    int values[10] = {2, 4, 9, 11, 8, 6, 20, 22, 33, 45};
    int sum = 0, min, max, even = 0, odd = 0, odd_indices = 0;
    float avg = 0;
    // Printing 10 elements of array
    printf("10 elements in array :");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", values[i]);
    }
    // for finding minimum value in array
    min = values[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > values[i])
        {
            min = values[i];
        }
    }
    printf("\nMinimum Value is = %d", min);

    // for finding maximum value in array
    max = values[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < values[i])
        {
            max = values[i];
        }
    }
    printf("\nMaximum Value is = %d", max);
    // for finding sum of values in array
    for (int i = 0; i < 10; ++i)
    {
        sum = sum + values[i];
    }
    printf("\nSum of array alements = %d", sum);

    // for finding average of values in array
    for (int i = 0; i < 10; ++i)
    {
        avg = sum / 10;
    }
    printf("\nAverage of array alements = %.2f", avg);

    // Displaying the last elemnt of array
    printf("\nLast Element of array = %d", values[9]);

    // Displaying value at index 2
    printf("\nValue at index 2 = %d", values[1]);

    // Displaying values in reverse order

    printf("\nValues in Reverse Order = ");

    for (int i = 9; i >= 0; i--)
    {
        printf("\n%d", values[i]);
    }

    // For finding even elements in array
    for (int i = 0; i < 10; i++)
    {
        if (values[i] % 2 == 0)
        {
            even++;
        }
    }
    printf("\nEven elements in array = %d", even);

    // For finding odd elements in array
    for (int i = 0; i < 10; i++)
    {
        if (values[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("\nOdd elements in array = %d", odd);

    // For finding sum of odd indices
    for (int i = 0; i < 10; i++)
    {
        if (values[i] % 2 != 0)
        {
            odd_indices = odd_indices + values[i];
        }
    }
    printf("\nOdd indices Sum = %d\n", odd_indices);

    return 0;
}