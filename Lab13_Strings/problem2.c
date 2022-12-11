#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    char x;
    printf("Enter a string: ");
    scanf("%s", a);
    int len = strlen(a);
    printf("Menu:\n");
    do
    {
        printf("A) Count the number of vowels in the string\nB) Count both the vowels and consonants in the string\nC) Display the most frequent character in the string\nD) Concatenate another string with the existing string\nE) Exit the program.\n");
        printf("\nEnter the option: ");
        scanf("\n%c", &x);

        if (x == 'A' || x == 'a')
        {
            int count = 0;
            for (int i = 0; i < len; i++)
            {
                if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                {
                    count++;
                }
            }
            printf("The number of vowels in a string are: %d\n", count);
        }

        if (x == 'B' || x == 'b')
        {
            int count = 0;
            for (int i = 0; i < len; i++)
            {
                if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                {
                    count++;
                }
            }
            printf("The number of vowels in a string are: %d\n", count);
            printf("%d", len);
            printf("The number of consonents in a string are: %d\n", len - count);
        }

        if (x == 'C' || x == 'c')
        {
            int sum = 0;
            char word;
            for (int i = 0; i < len; i++)
            {
                int count = 0;
                for (int j = 0; j < len; j++)
                {
                    if (a[i] == a[j])
                    {
                        count++;
                    }

                    if (count > sum)
                    {
                        sum = count;
                        word = a[i];
                    }
                }
            }

            printf("%c\n", word);
        }

        if (x == 'D' || x == 'd')
        {
            char b[50];
            printf("Enter a another string:");
            scanf("%s", b);

            strcat(a, b);

            puts(a);
        }

        if (x == 'E' || x == 'e')
        {
            break;
        }

    }

    while (1);

    return 0;
}
