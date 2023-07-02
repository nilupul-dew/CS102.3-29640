#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial=1, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num==0)
        printf("factorial=1");
    else if (num>0){
        for (int i = 1 ; i<num ; i++)
        {
            factorial *=i;
        }
        printf("factorial = %d", factorial);
    }else {
        printf("You cannot calculate the factorial of a negative number!");
    }
    return 0;
}
