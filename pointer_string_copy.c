#include <stdio.h>

void main()
{
    char source[100], destination[100];
    char *src, *dest;

    printf("Enter a word: ");
    scanf("%99s", source);

    src = source;
    dest = destination;

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    printf("Copied word: %s", destination);
}
