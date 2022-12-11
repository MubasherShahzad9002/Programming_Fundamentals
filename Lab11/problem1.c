#include <stdio.h>
int main()
{
    int array[9];
    int count;

    printf("Enter array elements: ");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Prime Numbers in array are : ");

    for (int i = 0; i < 9; i++)
    {
        count = 0;
        for (int j = 2; j <= array[i] / 2; j++)
        {
            if (array[i] % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && array[i] != 1)
            printf("%d ", array[i]);
    }

    return 0;
}