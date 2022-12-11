#include <stdio.h>
int main()
{
    int arr[2][2];
    int transpose[2][2];
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter element arr%d%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }

    // printing the matrix 
    printf("\nEntered matrix: \n");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        {
            printf("%d  ", arr[i][j]);
            if (j == cols - 1)
                printf("\n");
        }

    // computing the transpose
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
        {
            transpose[j][i] = arr[i][j];
        }

    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; ++i)
        for (int j = 0; j < rows; ++j)
        {
            printf("%d  ", transpose[i][j]);
            if (j == rows - 1)
                printf("\n");
        }
    return 0;
}