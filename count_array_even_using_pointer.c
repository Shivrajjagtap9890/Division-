#include <stdio.h>

void main()
{
    int numbers[6], i, count = 0;
    int *ptr;

    printf("Enter 6 numbers:\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &numbers[i]);

    ptr = numbers;

    for (i = 0; i < 6; i++)
    {
        if (*(ptr + i) % 2 == 0)
            count++;
    }

    printf("Even numbers = %d", count);
}
