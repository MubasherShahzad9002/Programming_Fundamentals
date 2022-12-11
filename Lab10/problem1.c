#include <stdio.h>
#include <math.h>

int main()
{

    int arr[3][4];
    int largest;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    largest = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (largest < arr[i][j])
            {
                largest = arr[i][j];
            }
        }
    }
    printf("\n\nLargest element in 2D array is %d\n", largest);

    return 0;
}