#include <stdio.h>

void main()
{
    int month;
    float saving, total = 0;

    for(month = 1; month <= 12; month++)
    {
        printf("Enter savings for month %d: ", month);
        scanf("%f", &saving);

        if(saving >= 0)
            total = total + saving;
        else
            printf("Negative saving ignored.\n");
    }

    printf("Total savings for the year = %.2f\n", total);
}
