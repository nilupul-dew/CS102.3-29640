#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b)
{
    int product = a*b;
    return product;
}

int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf ("%d  %d", &a, &b);
    printf ("Product of %d and %d : %d", a, b, multiply(a,b));
    return 0;
}
