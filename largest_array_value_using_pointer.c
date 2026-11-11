#include <stdio.h>

void main()
{
    int values[5], i, largest;
    int *ptr;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &values[i]);

    ptr = values;
    largest = *ptr;

    for (i = 1; i < 5; i++)
    {
        if (*(ptr + i) > largest)
            largest = *(ptr + i);
    }

    printf("Largest value = %d", largest);
}
