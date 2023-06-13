#include <stdio.h>

int main()//this is q1 switch part
{
    int x, mod;
    printf("Enter a number :");
    scanf("%d", &x);
    mod = x%2;
    if (x==0)
        printf("this is zero");
    else
    switch (mod)
    {
        case 0 : printf("%d is an even number", x);
        break;
        default : printf("%d is an odd number", x);
    }
}
