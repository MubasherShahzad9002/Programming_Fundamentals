#include <stdio.h>
#include <math.h>
// This fucntion would calculate factorila of number and it takes one argument
int fact(int n)
{
   long long  int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n, r;
    int combination = 0;
    printf("Enter Value of n = ");
    scanf("%d", &n);
    printf("Enter Value of r = ");
    scanf("%d", &r);

    combination = fact(n) / (fact(r) * fact(n - r));

    printf("Combination is = %d\n", combination);

    return 0;
}