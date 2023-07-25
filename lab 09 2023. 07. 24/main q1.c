#include <stdio.h>
#include <stdlib.h>

void sumndif()
{
    int a,b;
    printf ("Enter two numbers : ");
    scanf ("%d  %d", &a, &b);

    int sum = a+b;
    int dif = a-b;
    printf("The sum of two numbers : %d\n", sum);
    printf ("The difference of two numbers : %d", dif);
}
int main()
{
    sumndif();
    return 0;
}
