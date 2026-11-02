#include <stdio.h>

void main()
{
    int numbers[5];
    int i, sum = 0;
    int *ptr;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    ptr = numbers;

    for (i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum of array elements = %d", sum);
}
