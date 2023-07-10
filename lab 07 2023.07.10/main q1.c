#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int max,min,sum=0;
    float avg;
    printf("Enter 10 values for an array:\n");
    for (int i=0;i<10;i++)
    {
        printf("\n%d values: ", i+1);
        scanf("%d",& arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for (int i=0;i<10;i++)
    {
        if (max<arr[i])
            max = arr[i];
        if (min>arr[i])
            min = arr[i];
        sum+=arr[i];

    }

    avg=(float) sum/10.0;
    printf("Minimum value : %d\n", min);
    printf("Maximum value : %d\n", max);
    printf("Average value : %.2f\n", avg);
    printf("Reverse order of values : ");

    for (int i=9;i>=0;i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
