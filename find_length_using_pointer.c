#include <stdio.h>

void main()
{
    char text[100];
    char *ptr;
    int length = 0;

    printf("Enter a word: ");
    scanf("%99s", text);

    ptr = text;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("Length of the word = %d", length);
}
