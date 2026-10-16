#include <stdio.h>

void main()
{
    int day;
    float expense, total = 0;

    for(day = 1; day <= 7; day++)
    {
        printf("Enter expense for day %d: ", day);
        scanf("%f", &expense);

        if(expense >= 0)
            total = total + expense;
        else
            printf("Invalid expense. It was not added.\n");
    }

    printf("Total valid expenses for the week = %.2f\n", total);
}
