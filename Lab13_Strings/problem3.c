#include <stdio.h>
#include <string.h>
void encrypt(char a[], int len);
void decrypt(char a[], int len);
int main()
{
    char a[50];
    char x;
    printf("Enter the message: ");
    fgets(a, sizeof(a), stdin);
    int len = strlen(a);
    printf("Menu: \n");
    printf("A) You want to encrypt the message.\nB) You want to decrypt the message.\n");
    printf("\nEnter the option: ");
    scanf("\n%c", &x);

    if (x == 'A' || x == 'a')
    {
        encrypt(a, len);
    }

    if (x == 'B' || x == 'b')
    {
        decrypt(a, len);
    }

    return 0;
}

void encrypt(char a[], int len)
{

    for (int i = 0; i < len; i++)
    {
        if (a[i] == 'x')
        {
            a[i] = 'a';
        }
        else if (a[i] == 'y')
        {
            a[i] = 'b';
        }
        else if (a[i] == 'z')
        {
            a[i] = 'c';
        }
        else
        {
            a[i] += 3;
        }
    }
    printf("The encrypted message is: ");
    puts(a);
}

void decrypt(char a[], int len)
{

    for (int i = 0; i < len; i++)
    {
        if (a[i] == 'a')
        {
            a[i] = 'x';
        }
        else if (a[i] == 'b')
        {
            a[i] = 'y';
        }
        else if (a[i] == 'c')
        {
            a[i] = 'z';
        }
        else
        {
            a[i] = a[i] - 3;
        }
    }
    printf("The decrypted message is: ");
    puts(a);
}
