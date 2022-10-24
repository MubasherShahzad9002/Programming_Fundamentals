#include <stdio.h>
#include <math.h>
int calculateAttendence(int classes_Attended, int classes_Total);
int main()
{
    int total_Classes, attended_Classes, result;
    printf("Enter Total Classes Scheduled:");
    scanf("%d", &total_Classes);
    printf("Enter Total Classes Attended:");
    scanf("%d", &attended_Classes);
    result = calculateAttendence(attended_Classes, total_Classes);
    printf("Your Attendence is:%d %% \n", result);
    if (result >= 80)
    {
        printf("You are Allowed to sit in the Exam.\n");
    }
    else
    {
        printf("You are  Not Allowed to sit in the Exam.\n");
    }

    return 0;
}
int calculateAttendence(int classes_Attended, int classes_Total)
{
    float Percent;
    Percent = ((float)classes_Attended / classes_Total) * 100;
    return Percent;
}