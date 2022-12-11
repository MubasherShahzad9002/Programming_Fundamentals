#include <stdio.h>
#include <string.h>
#define N 50
int checkpalindrome(char string[])
{
    int i, count = 0, size;
    size = strlen(string);
    for (i = 0; i < size / 2; i++)
    {
        if (string[i] == string[size - i - 1])
            count++;
    }
    if (count == i)
        return 1;
    else
        return 0;
}
int main()
{

    char string[N];

    printf("Enter the string: ");
    scanf("%s", string);

    if (checkpalindrome(string))
        printf("%s is palindrome.\n", string);
    else
        printf("%s is not palindrome.\n", string);
}