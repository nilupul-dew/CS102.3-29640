#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4][4] = {
        {8,17,9,6},
        {5,2,11,18},
        {7,27,28,0},
        {4,1,3,10}
        };
    for (int i=0; i<4 ; i++)
    {
        for (int k=0; k<4; k++)
        {
            printf("%d\t", arr[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0; i<4 ; i++)
    {
        for (int k=0; k<4; k++)
        {
            if (arr[i][k]==5)
            {
                printf("Array[%d][%d]", i,k);
            }
        }
    }
    return 0;
}
