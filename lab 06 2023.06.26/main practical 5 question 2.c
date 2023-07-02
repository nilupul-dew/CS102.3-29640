#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1, marks, tot=0;
    float avg;

    for(count=1 ; count <=10 ; count++)
    {
        printf("Enter %d marks :", count);
        scanf("%d", &marks);
        tot = tot + marks;
    }
    avg = (float) tot / 10;
    printf("Total is : %d\n", tot);
    printf("Average is : %.2f\n", avg);

    if (avg<50)
        printf("Fail!");
    else
        printf("Pass!");
    return 0;
}
