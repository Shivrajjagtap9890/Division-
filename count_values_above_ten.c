#include <stdio.h>

void main()
{
    int i, n, value, count = 0;

    printf("How many values will you enter? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &value);

        if(value > 10)
            count++;
    }

    printf("Values greater than 10 = %d\n", count);
}
