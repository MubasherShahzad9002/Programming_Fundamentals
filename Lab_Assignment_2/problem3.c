#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, disc, root1, root2;
    printf("Enter Values of a:");
    scanf("%f", &a);
    printf("Enter Values of b:");
    scanf("%f", &b);
    printf("Enter Values of c:");
    scanf("%f", &c);

    if (a == 0 || b == 0 || c == 0)
    {
        printf("Values Can't be Zero\n");
    }

    else if (a < 0 || b < 0 || c < 0)
    {
        printf("Values must  be greater than  Zero\n");
    }

    else
    {
        disc = (b * b) - (4 * a * c);

        if (disc == 0)
        {
            root1 = -b / (2 * a);
            root2 = root1;
            printf("Root 1 is = %f\n", root1);
            printf("Root 2 is = %f\n", root2);
            printf("Roots are Real\n");
        }
        else if (disc < 0)
        {
            root1 = (-b + sqrt(-disc)) / (2 * a);
            root2 = (-b - sqrt(-disc)) / (2 * a);


            printf("Root 1 is = %f\n", root1);
            printf("Root 2 is = %f\n", root2);
            
            printf("Roots are imaginary\n");
        }
        else
        {
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);

            printf("Root 1 is = %f\n", root1);
            printf("Root 2 is = %f\n", root2);
            printf("Roots are Real and Unequal\n");
        }
    }

    return 0;
}
