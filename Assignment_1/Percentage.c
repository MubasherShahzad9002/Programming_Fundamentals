#include <stdio.h>

int main()
{
    int physics, chemistry, biology, maths, computer; 
    float percentage; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &physics, &chemistry, &biology, &maths, &computer);


    /* Calculate percentage = sum of the numbers / total num of values */
    percentage = (physics + chemistry + biology + maths + computer) / 5.0;

    printf("Percentage = %.2f\n", percentage);


    /* Find grade according to the percentage */
    if(percentage >= 90)
    {
        printf("Grade A ");
    }
    else if(percentage >= 80)
    {
        printf("Grade B ");
    }
    else if(percentage >= 70)
    {
        printf("Grade C ");
    }
    else if(percentage >= 60)
    {
        printf("Grade D ");
    }
    else if(percentage >= 40)
    {
        printf("Grade E ");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}