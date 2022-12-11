#include <stdio.h>
int find_small_val(int A[]);

int main()
{
    int x, y;
    int c[4] = {0, 3, 28, 5};

    int b = find_small_val(c);
    printf(" The smallest positive int : %d\n", b);
    return 0;
}
int find_small_val(int A[])
{

    for (int i = 1; 1; i++)
    {
        int count = 0;
        for (int k = 0; k <= 4; k++)
        {
            if (A[k] == i)
                count++;
        }

        if (count == 0)
            return i;
    }
    return 0;
}