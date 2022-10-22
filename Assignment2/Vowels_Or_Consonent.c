#include <stdio.h>
int main() {
    // Declaring character datatype variable named c
    char c;
    // Declaring integer datatype variables named lowercase
    int lowerCase_Vowel, upperCase_Vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // Lower case vowels
    lowerCase_Vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // Upper case vowels
    upperCase_Vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    // Conditions to check whether character entered by the user is vowel or consonant.
    if (lowerCase_Vowel || upperCase_Vowel)
        printf("%c is a vowel.\n", c);
    else
        printf("%c is a consonant.\n", c);
    return 0;
}