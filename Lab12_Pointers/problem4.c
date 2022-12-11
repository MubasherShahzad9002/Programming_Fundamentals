#include <stdio.h>
#define N 999
#define M 999
#define L 999

int main()
{
    int alpha[L], Beta[M], Gama[N];
    int i, j, size1, size2, size3 = 0;
    printf("Enter first  Array Size: ");
    scanf("%d", &size1);

    printf("Enter first  Array Elements\n");

    for (i = 0; i < size1; i++)
    {
        scanf("%d", alpha + i);
    }

    printf("First Array is \nAlpha={ ");
    for (i = 0; i < size1; i++)
    {
        printf("%d ", *(alpha + i));
    }
    printf(" }\n\n");

    printf("Enter Second Array Size:");
    scanf("%d", &size2);

    printf("Enter Second Array Elements\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", Beta + i);
    }

    printf("Second Array is \nAlpha={ ");
    for (i = 0; i < size2; i++)
    {
        printf("%d ", *(Beta + i));
    }
    printf(" }\n\n");

    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            if (alpha[i] == Beta[j])
            {
                Gama[size3++] = Beta[j];
            }
        }
    }

    for (i = 0; i < size3; i++)
    {
        for (j = i + 1; j < size3; j++)
        {
            if (Gama[i] == Gama[j])
            {
                for (int k = j; k < size3 - 1; k++)
                {
                    Gama[k] = Gama[k + 1];
                }
                size3--;

                j--;
            }
        }
    }

    printf("Common Elements are \nGama={ ");
    for (i = 0; i < size3; i++)
    {
        if (Gama[i] == Gama[i])
            printf("%d ", Gama[i]);
    }
    printf(" }\n\n");
    return 0;
}