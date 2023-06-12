#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.14, out, radius;
    char op;
    printf("Please Enter 'a' for 'area', 'c' for 'cir', 'v' for 'volume' as the inputs");
    printf("Choose your desired operation: ");
    scanf ("%c", &op);
    printf("enter the radius of the circle :");
    scanf("%f", & radius);
    switch (op)
    {
        case 'a':
            out = pi*(radius*radius);
            printf("Area = %.2f", out);
            break;
        case 'c':
            out = 2*pi*radius;
            printf("Circumstance = %.2f", out);
            break;
        case 'v':
            out = 0.75*pi*(radius*radius*radius);
            printf("Volume = %.2f", out);
            break;
        default:
            printf("Invalid operator!");
    }

    return 0;
}
