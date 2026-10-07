#include <stdio.h>

void main()
{
    int checkpoints, i;
    int x, y;

    printf("Enter number of robot checkpoints: ");
    scanf("%d", &checkpoints);

    printf("\nRobot Checkpoint Map\n");

    for (i = 1; i <= checkpoints; i++)
    {
        x = i * 10;
        y = i * 5;

        printf("Checkpoint %d -> X = %d, Y = %d\n", i, x, y);
    }
}
