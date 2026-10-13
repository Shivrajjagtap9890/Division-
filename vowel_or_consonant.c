#include <stdio.h>

void main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a vowel.", ch);
        }
        else
        {
            printf("%c is a consonant.", ch);
        }
    }
    else
    {
        printf("Please enter an alphabet.");
    }
}
