#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char ask_menu[100], ask_size[100], ask_items[100], choise[5];
int quantity, bill, total_bill;
const int tax = 100;
const int service_charges = 100;
void show_menu();
void Espresso();
void chocolateChillers();
void overIce();
void Fusion();
void upperString(char *p);
void chococillers_menu();
void overice_menu();
void Fusion_Menu();
void Espresso_Menu();

int main()
{

    while (1)
    {
        show_menu();
        printf("Order Your Beverage\n");
        fgets(ask_menu, sizeof(ask_menu), stdin);
        upperString(ask_menu);
        if (!strcmp(ask_menu, "ESPRESSO & MOCHA CHILLERS\n") || !strcmp(ask_menu, "ESPRESSO AND MOCHA CHILLERS\n"))
        {
            Espresso_Menu();
        }

        else if (!strcmp(ask_menu, "CHOCOLATE CHILLERS\n"))
        {
            chococillers_menu();
        }

        else if (!strcmp(ask_menu, "OVER ICE\n"))
        {
            overice_menu();
        }

        else if (!strcmp(ask_menu, "FUSION\n"))
        {

            Fusion_Menu();
        }
        else
        {
            printf("Enter Valid\n");
        }
        printf("Do You Want to continue?(Y?N)\n");
        fgetc(stdin);
        fgets(choise, sizeof(choise), stdin);

        if ((!strcmp(choise, "N\n")) || (!strcmp(choise, "n\n")) || (!strcmp(choise, "No\n")))
        {
            break;
        }
    }

    printf("Your Total Bill is =%d\n", total_bill + service_charges + tax);

    return 0;
}

// Function to Make Any string Array Upper Case  Started
void upperString(char *p)
{
    int length = strlen(p);
    for (int i = 0; i < length; i++)
    {
        p[i] = toupper(p[i]);
    }
}
// Function to Make Any string Array Upper Case Ended

// Function For Showing Menu Started
void show_menu()
{
    printf("\n\t\t\t--------------------------------------------\n");
    printf("\t\t\t\t\tGloria Jeans\n");
    printf("\t\t\t--------------------------------------------\n\n");
    printf("* ESPRESSO & MOCHA CHILLERS\n");
    printf("* CHOCOLATE CHILLERS\n");
    printf("* OVER ICE\n");
    printf("* FUSION\n\n");
}
// Function For Showing Menu Ended

// Function For Showing Espresso Menu Started
void Espresso()
{
    printf("\n\t\t\t--------------------------------------------\n");
    printf("\t\t\t\t\tGloria Jeans\n");
    printf("\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\tESPRESSO & MOCHA CHILLERS\n\n");
    printf("\tItems\t\t\t\t\t\t       Small\t     Regular\n");
    printf("------------------------------------------------------------------------------------\n");
    int Espresso_Small[10] = {361, 361, 361, 396, 396, 396, 396, 399, 399};
    int Espresso_Regular[10] = {409, 409, 409, 461, 461, 461, 461, 509, 509};
    char Espresso[][28] = {
        "VERY VANILLA CHILLER\t",
        "COCOA LOCO\t\t",
        "COOKIES N' CREAM\t",
        "HAZELNUT MOCHA CHILLER\t",
        "CHOCOLATE MACADAMIA CHILLER",
        "ITALIAN DOCA CHILLER\t",
        "CHARAMAL NET CHILLER\t",
        "TERAMISU CHILLER\t",
        "TOFEE NUT CHILLER\t"};
    for (int i = 0; i < 9; i++)
    {

        printf("%s\t\t\t\t\t%d\t\t%d\n", Espresso[i], Espresso_Small[i], Espresso_Regular[i]);
    }
}
// Function For Showing Espresso Menu Ended

// Function For Showing Chocolate Chillers Menu Started
void chocolateChillers()
{
    printf("\n\t\t\t--------------------------------------------\n");
    printf("\t\t\t\t\tGloria Jeans\n");
    printf("\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\t  CHOCOLATE CHILLERS\n\n");
    printf("\tItems\t\t\t\t\t\t       Small\t     Regular\n");
    printf("------------------------------------------------------------------------------------\n");
    int Chiller_Small[3] = {348, 348, 348};
    int Chiller_Regular[3] = {365, 365, 400};
    char Chocolate_chillers[][28] = {
        "ORIGINAL ICED CHOCLATE\t",
        "WHITE ICED CHOCLATE\t",
        "CHOCOLATE DELIGHT\t",
    };
    for (int i = 0; i < 3; i++)
    {

        printf("%s\t\t\t\t\t%d\t\t%d\n", Chocolate_chillers[i], Chiller_Small[i], Chiller_Regular[i]);
    }
}
// Function For Showing Chocolate Chillers Menu Ended

// Function For Showing Over ice Menu Started
void overIce()
{
    printf("\n\t\t\t--------------------------------------------\n");
    printf("\t\t\t\t\tGloria Jeans\n");
    printf("\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\t\tOVER ICE \n\n");
    printf("\tItems\t\t\t\t\t\t       Small\t     Regular\n");
    printf("------------------------------------------------------------------------------------\n");
    int Overice_Small[11] = {300, 300, 378, 252, 250, 250, 250, 250, 335, 335, 239};
    int Overice_Regular[11] = {374, 361, 430, 274, 291, 291, 291, 291, 348, 361, 291};
    char Overice[][30] = {
        "SIGNATURE ICED COFEE\t",
        "ICED MOCHA\t\t",
        "ICED CARAMEL LATTE\t",
        "ICED AMERICANO\t\t",
        "BLUEBERRY LEMONADE\t",
        "LYCHEE LEMONADE\t\t",
        "GREEN APPLE LEMONADE\t",
        "PEACH LEMONADE\t\t",
        "APPLE SODA\t\t",
        "LIME SODA\t\t",
        "ICED TEAS\t\t"};
    for (int i = 0; i < 11; i++)
    {

        printf("%s\t\t\t\t\t%d\t\t%d\n", Overice[i], Overice_Small[i], Overice_Regular[i]);
    }
}
// Function For Showing Over ice Menu Ended

// Function For Showing Fusion Menu Started
void Fusion()
{
    printf("\n\t\t\t--------------------------------------------\n");
    printf("\t\t\t\t\tGloria Jeans\n");
    printf("\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\t\t   FUSION\n\n");
    printf("\tItems\t\t\t\t\t\t       Small\t     Regular\n");
    printf("------------------------------------------------------------------------------------\n");
    int Fusion_Small[4] = {335, 335, 348, 348};
    int Fusion_Regular[10] = {365, 365, 400, 400};
    char Fusion[][28] = {
        "ICED LAME\t\t",
        "APPLE CHILLER\t\t",
        "CHAI CHILLER\t\t",
        "GREEN TEA CHILLER\t"};
    for (int i = 0; i < 4; i++)
    {

        printf("%s\t\t\t\t\t%d\t\t%d\n", Fusion[i], Fusion_Small[i], Fusion_Regular[i]);
    }
}
// Function For Showing Fusion Menu Ended

void Espresso_Menu()
{

    Espresso();

    printf("\nEnter Item Name from Menu: ");
    fgets(ask_items, sizeof(ask_items), stdin);

    printf("Enter  Item Size(Small/Regular): ");
    fgets(ask_size, sizeof(ask_size), stdin);
    printf("Enter  Item Quantity: ");
    scanf("%d", &quantity);

    upperString(ask_items);
    upperString(ask_size);

    if ((!strcmp(ask_items, "VERY VANILLA CHILLERS\n")) || (!strcmp(ask_items, "COCOA LOCO\n")) || (!strcmp(ask_items, "COOKIES N' CREAM\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 361;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 409;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "HAZELNUT MOCHA CHILLER\n")) || (!strcmp(ask_items, "CHOCOLATE MACADAMIA CHILLER\n")) || (!strcmp(ask_items, "ITALIAN DOCA CHILLER\n")) || (!strcmp(ask_items, "CHARAMAL NET CHILLER\n")))
    {
        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 396;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 461;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "TERAMISU CHILLER\n")) || (!strcmp(ask_items, "TOFEE NUT CHILLER\n")))
    {
        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 399;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 509;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else
    {
        printf("Invalid Item\n");
    }
}

void chococillers_menu()
{
    chocolateChillers();
    printf("\nEnter Item Name from Menu: ");
    fgets(ask_items, sizeof(ask_items), stdin);

    printf("Enter  Item Size(Small/Regular): ");
    fgets(ask_size, sizeof(ask_size), stdin);
    printf("Enter  Item Quantity: ");
    scanf("%d", &quantity);

    upperString(ask_items);
    upperString(ask_size);

    if ((!strcmp(ask_items, "ORIGINAL ICED CHOCLATE\n")) || (!strcmp(ask_items, "WHITE ICED CHOCLATE\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 348;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 365;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "CHOCOLATE DELIGHT\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 348;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 400;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else
    {
        printf("Invalid Item\n");
    }
}

void overice_menu()
{
    overIce();
    printf("\nEnter Item Name from Menu: ");
    fgets(ask_items, sizeof(ask_items), stdin);

    printf("Enter  Item Size(Small/Regular): ");
    fgets(ask_size, sizeof(ask_size), stdin);
    printf("Enter  Item Quantity: ");
    scanf("%d", &quantity);

    upperString(ask_items);
    upperString(ask_size);

    if ((!strcmp(ask_items, "SIGNATURE ICED COFEE\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 300;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 374;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }

    else if ((!strcmp(ask_items, "ICED MOCHA\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 300;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 361;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "ICED CARAMEL LATTE\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 378;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 430;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "ICED AMERICANO\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 252;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 274;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }

    else if ((!strcmp(ask_items, "BLUEBERRY LEMONADE\n")) || (!strcmp(ask_items, "LYCHEE LEMONADE\n")) || (!strcmp(ask_items, "GREEN APPLE LEMONADE\n")) || (!strcmp(ask_items, "PEACH LEMONADE\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 250;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 291;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "APPLE SODA\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 335;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 348;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "LIME SODA\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 335;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 361;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
    else if ((!strcmp(ask_items, "ICED TEAS\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 239;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 291;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }

    else
    {
        printf("Invalid Item\n");
    }
}

void Fusion_Menu()
{
    Fusion();

    printf("\nEnter Item Name from Menu: ");
    fgets(ask_items, sizeof(ask_items), stdin);

    printf("Enter  Item Size(Small/Regular): ");
    fgets(ask_size, sizeof(ask_size), stdin);
    printf("Enter  Item Quantity: ");
    scanf("%d", &quantity);

    upperString(ask_items);
    upperString(ask_size);

    if ((!strcmp(ask_items, "ICED LAME\n")) || (!strcmp(ask_items, "APPLE CHILLER\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 335;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 365;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }

    else if ((!strcmp(ask_items, "CHAI CHILLER\n")) || (!strcmp(ask_items, "GREEN TEA CHILLER\n")))
    {

        if (!strcmp(ask_size, "SMALL\n"))
        {

            bill = quantity * 348;
            total_bill += bill;
        }
        else if (!strcmp(ask_size, "REGULAR\n"))
        {
            bill = quantity * 400;
            total_bill += bill;
        }
        else
        {
            printf("Invalid Size\n");
        }
    }
}
