#include <stdio.h>

void main()
{
    int light;

    printf("Enter light intensity value: ");
    scanf("%d", &light);

    if (light < 30)
    {
        printf("Light Status: Dark");
    }
    else if (light <= 70)
    {
        printf("Light Status: Normal");
    }
    else
    {
        printf("Light Status: Bright");
    }
}
