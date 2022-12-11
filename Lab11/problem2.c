#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int dice1, dice2, sum, count[13] = {0};

    srand(time(NULL));

    for (int i = 0; i < 1000; i++)
    {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;

        switch (sum)
        {
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        case 6:
            count[6]++;
            break;
        case 7:
            count[7]++;
            break;
        case 8:
            count[8]++;
            break;
        case 9:
            count[9]++;
            break;
        case 10:
            count[10]++;
            break;
        case 11:
            count[11]++;
            break;
        case 12:
            count[12]++;
            break;
        }
    }

    printf("Sum\tCount\n");
    for (int j = 2; j < 13; j++)
    {
        printf("%d\t%d\n", j, count[j]);
    }

    return 0;
}