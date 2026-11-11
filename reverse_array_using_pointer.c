#include <stdio.h>

void main()
{
    int values[5], i;
    int *ptr;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &values[i]);

    ptr = values + 4;

    printf("Array in reverse order: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr--;
    }
}
