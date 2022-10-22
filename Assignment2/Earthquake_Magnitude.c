#include <stdio.h>
int main()
{
    // Decalring variable as float datatype named magnitude
    float magnitude;
    printf("Enter Earthquake Magnitude : ");
    scanf("%f", &magnitude);
    // conditions to check if magnitude is greater than input value then which descriptor lies
    if (magnitude > 0 && magnitude <= 2.0)
    {
        printf("Descriptor : Micro\n");
    }
    else if (magnitude > 2.0 && magnitude <= 3.0)
    {
        printf("Very Minor\n");
    }
    else if (magnitude > 3.0 && magnitude <= 4.0)
    {
        printf("Minor\n");
    }
    else if (magnitude > 4.0 && magnitude <= 5.0)
    {
        printf("Light\n");
    }
    else if (magnitude > 5.0 && magnitude <= 6.0)
    {
        printf("Moderate\n");
    }
    else if (magnitude > 6.0 && magnitude <= 7.0)
    {
        printf("Strong\n");
    }
    else if (magnitude > 7.0 && magnitude <= 8.0)
    {
        printf("Major\n");
    }
    else if (magnitude > 8.0 && magnitude <= 10.0)
    {
        printf("Great\n");
    }
    else if (magnitude > 10.0)
    {
        printf("Meteoric\n");
    }
    return 0;
}