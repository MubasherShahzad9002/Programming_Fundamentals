#include <stdio.h>
#include <math.h>
int main()
{
    int Cookies, C_Box, C_Container, Extra_Cookies, Extra_boxes;
    int Total_Containers, Total_Boxes;

    printf("Enter Total Number of Cookies:");
    scanf("%d", &Cookies);
    printf("How many Cookies You want to put In a Box? :");
    scanf("%d", &C_Box);
    printf("How many Cookies Box You want to put In a Container? :");
    scanf("%d", &C_Container);

    Total_Boxes = Cookies / C_Box;
    Extra_Cookies = Cookies % C_Box;
    printf("\nTotal Number of Boxes to Ship the Cookies are: %d Boxes\n", Total_Boxes);
    if (Extra_Cookies != 0)
    {
        printf("Extra Cookies left are: %d Cookies\n\n", Extra_Cookies);
    }

    Total_Containers = Total_Boxes / C_Container;
    Extra_boxes = Total_Boxes % C_Container;
    printf("Total Number of Containers to Ship the Cookies Boxes are: %d Containers\n", Total_Containers);
    if (Extra_boxes != 0)
    {
        printf("Extra Cookies Boxes  left are: %d Boxes\n", Extra_boxes);
    }

    return 0;
}