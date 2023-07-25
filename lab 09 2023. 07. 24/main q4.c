#include <stdio.h>
#include <stdlib.h>

/*int divide(int a, int b)
{
    int quotient = a/b;
    return quotient;
}

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf ("%d  %d", &a, &b);
    printf ("quotient of %d and %d : %d", a, b, divide(a,b));
    return 0;
}*/
float divide(int a, int b)
{
    return (float)a/b;;
}

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf ("%d  %d", &a, &b);
    printf ("quotient of %.2f and %.2f : %.2f", a, b, divide(a,b));
    return 0;
}
