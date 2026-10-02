#include<stdio.h>

void main()
{
    int battery;
    printf("Enter battery charge percentage: ");
    scanf("%d",&battery);
    if(battery >= 60)
        printf("Battery Status: Good");
    else if(battery >= 30)
        printf("Battery Status: Low");
    else
        printf("Battery Status: Critical");
}
