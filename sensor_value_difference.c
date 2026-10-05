#include <stdio.h>

void main()
{
    int first_sensor, second_sensor, difference;

    printf("Enter first sensor value: ");
    scanf("%d", &first_sensor);

    printf("Enter second sensor value: ");
    scanf("%d", &second_sensor);

    difference = first_sensor - second_sensor;

    printf("Difference between sensor values = %d", difference);
}
