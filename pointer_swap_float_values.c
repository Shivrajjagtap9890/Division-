#include <stdio.h>

void swap(float *a, float *b)
{
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    float first, second;

    printf("Enter first decimal number: ");
    scanf("%f", &first);

    printf("Enter second decimal number: ");
    scanf("%f", &second);

    swap(&first, &second);

    printf("After swapping: %.2f and %.2f", first, second);
}
