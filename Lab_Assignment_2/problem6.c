#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, step, temp1, temp2, Ox, Oy;
    float distance, sum, Average;

    Ox = 0;
    Oy = 0;
    temp1 = 0;
    temp2 = 0;
    sum = 0;
    step = 0;
    Average = 0;

    while (1)

    {

        printf("Enter X and Y Coordinate:");
        scanf("%d %d", &x, &y);

        if (x == temp1 && y == temp2)
        {
            break;
        }
        temp1 = x;
        temp2 = y;

        distance = sqrt((x - Ox) * (x - Ox) + (y - Oy) * (y - Oy));
        Ox = x;
        Oy = y;
        sum = sum + distance;
        step++;
    }

    Average = sum / step;
    printf("Distance is : %f\n", sum);
    printf("Total Steps are: %d\n", step);
    printf("Average Distance is : %f\n", Average);
    return 0;
}