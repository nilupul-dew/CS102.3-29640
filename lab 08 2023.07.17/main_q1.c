#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //getting user inputs
    int arr1[3][3], arr2[3][3], ans[3][3];
    printf("Enter numbers for matrix 01 :\n");
    for (int i =0; i<3 ; i++)
    {
        for (int k=0; k<3;k++)
        {
            printf("Enter a value for arr1[%d][%d] : ", i,k);
            scanf ("%d", &arr1[i][k]);
        }
    }
    printf("\nEnter numbers for matrix 02 :\n");
    for (int a =0; a<3 ;a++)
    {
        for (int b=0; b<3;b++)
        {
            printf("Enter a value for arr2[%d][%d] : ", a, b);
            scanf ("%d", &arr2[a][b]);
        }
    }

    printf ("\nSum of above two matrices: \n");

    for (int x=0; x<3 ; x++)
    {
        for (int y=0;y<3;y++)
        {
            ans[x][y]= arr1[x][y]+arr2[x][y];
            printf ("%d\t", ans[x][y]);
        }
        printf("\n");
    }

    return 0;
}
