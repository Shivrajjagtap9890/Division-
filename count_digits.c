#include <stdio.h>

void main()
{
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number == 0)
    {
        count = 1;
    }
    else
    {
        if(number < 0)
            number = -number;

        for(; number > 0; number = number / 10)
        {
            count++;
        }
    }

    printf("Number of digits = %d\n", count);
}
