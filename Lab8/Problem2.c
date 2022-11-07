#include <stdio.h>
#include <math.h>
char Diamond(char sym);
int main()
{
    char sym;
    printf("Enter Symbol: ");
    scanf(" %c", &sym);
    char c = Diamond(sym);
    printf(" %c", c);
    return 0;
}
char Diamond(char sym)
{
    int col = 1;
    for (int i = 1; i < 10; i++)
    {

        for (int j = 1; j <= col; j++)
        {
            printf("%c", sym);
        }
        if (i < 5)
        {
            col++;
        }
        else
        {
            col--;
        }

        printf("\n");
    }
}
