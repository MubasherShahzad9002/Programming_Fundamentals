#include <stdio.h>
#include <math.h>
int LCM(int n1, int n2);

int main()
{
    int Num1, Num2, lcm;
    printf("Enter First Number:");
    scanf("%d", &Num1);
    printf("Enter First Number:");
    scanf("%d", &Num2);

    lcm = LCM(Num1, Num2);

    printf("LCM of %d and %d is: %d\n", Num1, Num2, lcm);

    return 0;
}

int LCM(int n1, int n2)
{
    int hcf, i, lcm;
    for (i = 1; i <= n1 && i <= n2; ++i)
    {

        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }

    lcm = (n1 * n2) / hcf;
    return lcm;
}