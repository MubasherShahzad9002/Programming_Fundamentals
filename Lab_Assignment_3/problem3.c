#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 10
int main()
{

    char Grade[N];
    float subjects, GPA = 0.0, credit = 0.0, total_Ch = 0, credit_hours;
    printf("Enter Number of Subjects:");
    scanf("%f", &subjects);

    for (int i = 0; i < subjects; i++)
    {
        printf("Enter  grade in  Subject (%d): ", i + 1);
        scanf("%s", Grade);
        printf("Enter  credit Hours of  Subject (%d): ", i + 1);
        scanf("%f", &credit_hours);

        if (!strcmp(Grade, "A"))
        {
            credit += (credit_hours * 4.0);
        }

        else if (!strcmp(Grade, "A-"))
        {
            credit += credit_hours * 3.67;
        }

        else if (!strcmp(Grade, "B+"))
        {
            credit += credit_hours * 3.33;
        }

        else if (!strcmp(Grade, "B"))
        {
            credit += credit_hours * 3.0;
        }

        else if (!strcmp(Grade, "B-"))
        {
            credit += credit_hours * 2.67;
        }

        else if (!strcmp(Grade, "C+"))
        {
            credit += credit_hours * 2.33;
        }

        else if (!strcmp(Grade, "C"))
        {
            credit += credit_hours * 2.0;
        }

        else if (!strcmp(Grade, "C-"))
        {
            credit += credit_hours * 1.67;
        }

        else if (!strcmp(Grade, "D+"))
        {
            credit += credit_hours * 1.33;
        }

        else if (!strcmp(Grade, "D"))
        {
            credit += credit_hours * 1;
        }

        else if (!strcmp(Grade, "F"))
        {
            credit += credit_hours * 0;
        }
        else
        {
            printf("Invalid Grade");
        }
        total_Ch += credit_hours;
    }
    GPA = credit / total_Ch;
    printf("GPA is: %.2f\n", GPA);

    return 0;
}