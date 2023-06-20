#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter the month number :");
    scanf("%d",&month);

    if (month>=13)
        printf("Invalid month number!");
    else
    {
    switch (month)
    {
        case 2:
            printf("Number of days : 28");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days : 31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days : 30");
            break;
    // this method is also correct
    //default is also can be used instead of the last 4 cases.
    }
    }
    return 0;
}
