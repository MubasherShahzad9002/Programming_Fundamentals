#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks = ");
    scanf("%d", &marks);

    //  if-else Condition Starts
    if (marks >= 90 && marks <= 100)
    {
        printf("Your Grade  is A+\n");
    }

    else if (marks >= 80 && marks <= 89)
    {
        printf("Your Grade  is A\n");
    }

    else if (marks >= 70 && marks <= 79)
    {
        printf("Your Grade  is B\n");
    }

    else if (marks >= 60 && marks <= 69)
    {
        printf("Your Grade  is C\n");
    }

    else if (marks >= 50 && marks <= 59)
    {
        printf("Your Grade  is D\n");
    }

    else
    {
        printf("Your Grade  is F\ng");
    }

    // if-else Conditions Ends
    return 0;
}