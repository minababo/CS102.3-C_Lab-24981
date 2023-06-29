#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    for(i=0;i<10;++i)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("[");

    for(i=0;i<9;++i)
    {
        printf("%d, ", arr[i]);
    }

    printf("%d]", arr[9]);

    return 0;
}
