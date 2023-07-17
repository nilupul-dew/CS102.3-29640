#include <stdio.h>
#include <stdlib.h>

int main()
{
    //providing inputs in the begining
    int arr1[3][3]= {{3,2,4},{1,4,6},{4,3,2}};//{3,2,4,1,4,6,4,3,2}
    int arr2[3][3]= {{2,6,3},{4,3,2},{5,1,7}};//{2,6,3,4,3,2,5,1,7}
    int ans[3][3];

    for (int i=0; i<3; i++)
    {
        for (int k=0;k<3;k++ )
        {
            printf("%d\t", arr1[i][k]);
        }
        printf("\t");

        for (int k=0;k<3;k++ )
        {
            printf("%d\t", arr1[i][k]);
        }
        printf("\t");

        for (int k=0; k<3;k++)
        {
            ans[i][k]= arr1[i][k]+arr2[i][k];
            printf("%d\t", ans[i][k]);
        }
        printf("\n");
    }
    return 0;
}
