// Write a Program to Calculate Permutation(nPr) for given values of n and r
#include <stdio.h>
int main()
{
    int permutation, n, r, fact = 1, flag = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        fact = fact * i;
    }

    printf("Enter value of r: ");
    scanf("%d", &r);
    // declaring perm varieble for n-r
    int perm = n - r;
    for (int j = 1; j <= perm; ++j)
    {
        flag = flag * j;
    }
    // formula for permutation = n!/(n-r)! which i declared as variable
    permutation = fact / flag;
    printf("Permutation = %d\n", permutation);
    return 0;
}
