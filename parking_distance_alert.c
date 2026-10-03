#include <stdio.h>

void main()

{

    float distance;

    clrscr();

    printf("Enter distance from parking wall: ");

    scanf("%f", &distance);

    if (distance < 10)

    {

        printf("Alert: Stop Vehicle");

    }

    else if (distance <= 30)

    {

        printf("Alert: Slow Down");

    }

    else

    {

        printf("Alert: Safe Distance");

    }

    getch();

}
