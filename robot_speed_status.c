#include<stdio.h>

void main()
{
    int speed;

    printf("Enter robot speed: ");
    scanf("%d",&speed);

    if(speed < 20)
        printf("Robot Status: Slow");
    else if(speed <= 50)
        printf("Robot Status: Normal");
    else
        printf("Robot Status: High");
}
