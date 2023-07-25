#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void sum_and_dif(int a, int b)
{
    int sum = a+b;
    int dif = a-b;
    printf("The sum of two numbers : %d\n", sum);
    printf ("The difference of two numbers : %d", dif);
}

int main()
{
    int num1,num2;
    printf ("Enter two numbers : ");
    scanf ("%d  %d", &num1, &num2);
    sum_and_dif(num1,num2);
    return 0;
}
