#include <stdio.h>
#include <stdlib.h>

void sum()
{
    int x,y;
    printf("Enter 2 numbers :");
    scanf("%d  %d", &x, &y);
    int sum = x+y;
    printf("Sum : %d\n", sum);
}
int main()
{
    sum();
    sum();
    sum();
    return 0;
}

