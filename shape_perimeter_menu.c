#include <stdio.h>

void main()
{
    int choice;
    float side, length, width, a, b, c;

    printf("Choose a shape to calculate perimeter:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter side length: ");
            scanf("%f", &side);
            printf("Perimeter = %.2f\n", 4 * side);
            break;

        case 2:
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            printf("Perimeter = %.2f\n", 2 * (length + width));
            break;

        case 3:
            printf("Enter the three side lengths: ");
            scanf("%f %f %f", &a, &b, &c);

            if(a + b > c && a + c > b && b + c > a)
                printf("Perimeter = %.2f\n", a + b + c);
            else
                printf("These sides do not form a valid triangle.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }
}
