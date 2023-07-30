#include <stdio.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    int x, y;

    printf("Values in the 1st Multi Dimensional Array: \n");

    for (x = 0; x < 3; ++x)
    {
        for (y = 0; y < 3; ++y)
        {
            printf("Enter a value for the position [%d][%d]: ",x,y);
            scanf("%d", &arr1[x][y]);
        }
    }

    printf("\nValues in the 2nd Multi Dimensional Array: \n");


    for (x = 0; x < 3; ++x)
    {
        for (y = 0; y < 3; ++y)
        {
            printf("Enter a value for the position [%d][%d]: ",x,y);
            scanf("%d", &arr2[x][y]);
        }
    }

    printf("\nMatrix Sum: \n");

    for (x = 0; x < 3; ++x)
    {
        for (y = 0; y < 3; ++y)
        {
            arr3[x][y] = arr1[x][y] + arr2[x][y];
            printf("%d ", arr3[x][y]);
        }
        printf("\n");
    }



    return 0;
}
