#include <stdio.h>
void main()
{
    int n = 1, rem, s, c = 0;
    for (int k = 1; k > 0; k++)
    {
        s = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            rem = n % i;
            if (rem == 0)
            {
                s = s + i;
            }
        }
        if (s == n)
        {
            c++;
            printf(" %d is a Perfect Divisible or Perfect Number\n", n);
            if (c == 4)
            {
                break;
            }
        }
        n++;
    }
}