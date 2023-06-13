#include <stdio.h>

int main()
{
int x, mod;
printf("Enter a number :");
scanf("%d", &x);
mod = x%2;
if (mod == 1)
    printf("%d is an odd number", x);
else
    printf("%d is an even number", x);
}
