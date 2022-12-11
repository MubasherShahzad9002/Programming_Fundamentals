#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *arr, num, key, count = 0;
    srand(time(0));
    printf("Enter the size of array: ");
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    printf("\nEnter the elements of array: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    printf("\nEnter the element to be searched in array: ");
    scanf("%d", &key);
    for (int i = 0; i < num; i++)
    {
        if (*(arr + i) == key)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nnum %d does not exist in array.", key);
    }
    else
    {
        printf("\nnum %d exists %d times in array.", key, count);
    }
    return 0;
}