#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("\n");

    int arr1[size], arr2[size];
    printf("Input the numbers for Array 1: \n");
    int scalarSum1 = 0;

    for (int i=0; i<size; i++)
    {
        printf("Enter num %d: ", i+1);
        scanf("%d", &arr1[i]);

        scalarSum1 += arr1[i];
    }

    printf("The Scalar Sum of Array 1 is %d\n\n", scalarSum1);

    printf("Input the numbers for Array 2: \n");
    int scalarSum2 = 0;
    for (int i=0; i<size; i++)
    {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &arr2[i]);

        scalarSum2 += arr2[i];
    }

    printf("The Scalar Sum of Array 2 is %d\n\n", scalarSum2);

    int vectorSum[size];
    for (int i=0; i<size; i++)
    {
        vectorSum[i] = arr1[i] + arr2[i];
    }

    printf("The Vector Sum array is: ");
    for (int i=0; i<size; i++)
    {
        printf("%d ", vectorSum[i]);
    }

    return 0;
}
