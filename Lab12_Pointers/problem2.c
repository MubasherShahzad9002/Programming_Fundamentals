#include <stdio.h>
int main()
{

    int arr[10];

    printf("Enter the elements of array : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr+i);
    }

    printf("Entered elements are : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr+i));
    }

    int maxVal = 0, count = 0, maxCount = 0;

    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (*(arr+i) == *(arr+j))
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxVal = arr[i];
        }
       
    }

    printf("\nThe mode is : %d as count is : %d\n", maxVal, maxCount);

    return 0;
}