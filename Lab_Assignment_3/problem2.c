#include <stdio.h>
int main()
{
    int rows_A, coloumns_A, rows_B, coloumns_B;

    // Matix A rows and columns number
    printf("Enter the number of rows in Matrix A : ");
    scanf("%d", &rows_A);
    printf("Enter the number of columns in Matrix A : ");
    scanf("%d", &coloumns_A);

    // Matix B rows and columns number
    printf("\nEnter the number of rows in Matrix B : ");
    scanf("%d", &rows_B);
    printf("Enter the number of columns in Matrix B : ");
    scanf("%d", &coloumns_B);

    int arr1[rows_A][coloumns_A];
    int arr2[rows_B][coloumns_B];
    int mul[rows_A][coloumns_B];

    // Matrix A values
    printf("\nMatrix A : \n");
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < coloumns_A; j++)
        {
            printf("Enter the element of %d %d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    // Matrix B values
    printf("\nMatrix B : \n");
    for (int i = 0; i < rows_B; i++)
    {
        for (int j = 0; j < coloumns_B; j++)
        {
            printf("Enter the element of %d %d : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }

    // Condition for checking wether multiplication is possible or not

    if (coloumns_A == rows_B) // if Matrix A columns = Marix B rows then multiplication can be done
    {
        // Multiplying both matrices and storing it in third matrix 
        for (int i = 0; i < rows_A; i++)
        {
            for (int j = 0; j < coloumns_B; j++)
            {
                int sum = 0;
                for (int k = 0; k < rows_B; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                    mul[i][j] = sum;
                }
            }
        }

        // Multiplicated matrix values
        printf("\nMultiplicated Matrix : \n");
        for (int i = 0; i < rows_A; i++)
        {
            for (int j = 0; j < coloumns_B; j++)
            {
                printf("%3d", mul[i][j]);
            }
            printf("\n");
        }
    }

    else
        printf("Matrix can't be multiplied because Matrix A columns != rows of Matrix B. ");

    return 0;
}
