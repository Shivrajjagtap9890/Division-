#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int first, second;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    printf("\nBefore swapping: %d and %d\n", first, second);

    swap(&first, &second);

    printf("After swapping: %d and %d", first, second);
}
