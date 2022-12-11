#include <stdio.h>

int main()
{
    int arr[3][3];
    int rows, columns;
    int Sum = 0;

    printf("\nEnter Number of rows and columns  :  ");
    scanf("%d %d", &rows, &columns);

    printf("\nEnter the Matrix Elements \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // sum of diagonal matrix
    for (int i = 0; i < rows; i++)
    {
        Sum = Sum + arr[i][i];
    }

    printf("\nAddition of Diagonal Elements of Array Matrix =  %d\n", Sum);

    return 0;
}