#include <stdio.h>
int removerepeated(int size, int arr[]);
void sort(int size, int arr[]);
int main()
{
    int i, size1, size2, size, j = 0, k;
    printf("Enter size of an array1 : ");
    scanf("%d", &size1);
    printf("Enter size of an array2 : ");
    scanf("%d", &size2);
    int arr[size1], b[size2], uni[size1 + size2];
    printf("Enter numbers for array 1 : ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter numbers for array 2 : ");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }
    // union start
    for (i = 0; i < size1; i++)
    {
        uni[j] = arr[i];
        j++;
    }
    for (i = 0; i < size2; i++)
    {
        uni[j] = b[i];
        j++;
    }

    // Sorting

    sort(size1 + size2, uni);

    // Remove repeated elements
    size = removerepeated(size1 + size2, uni);
    printf("Array after Union : ");
    for (i = 0; i < size; i++)
    {
        printf("%d", uni[i]);
    }
    printf("\n");
    // Sorting
}

int removerepeated(int size, int arr[])
{
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size;)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
    return (size);
}

void sort(int size, int arr[])
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}