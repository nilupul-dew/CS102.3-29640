#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,out;
    char op;
    printf("Enter an operator : ");
    scanf("%c", & op);
    printf("Enter two numbers : ");
    scanf("%f %f", &n1, &n2);

    switch(op)
    {
        case '+':
            out = n1+n2;
            break;
        case '-':
            out = n1-n2;
            break;
        case '*':
            out = n1*n2;
            break;
        case '/':
            if (n2==0)
                printf("cannot divide a number by zero");
            else
                out = n1/n2;
            break;
        default:
            printf("\nInvalid operator!");
    }
    printf ("\nOutput : %.2f", out);
    return 0;
}
