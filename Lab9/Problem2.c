#include <stdio.h>
int main()
{
    int alpha[60];
    int i, j, k;
    printf("Square of first 20 elements:\n");
    for (i = 0; i < 20; i++)
    {
        alpha[i] = i * i;
        printf("%d\t\t", alpha[i]);
    }
    printf("\nCube of next 20 elements:\n");
    for (j = 20; j < 40; j++)
    {
        alpha[j] = j * j * j;
        printf("%d\t\t", alpha[j]);
    }
    printf("\nSum of first and last 20 elements:\n");
    for (k = 40, i = 0, j = 20; k < 60, j < 40, i < 20; i++, j++, k++)
    {
        alpha[k] = alpha[i] + alpha[j];
        printf("%d\t\t", alpha[k]);
    }
    return 0;
}