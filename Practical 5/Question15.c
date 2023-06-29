#include <stdio.h>

int main()
{
    int arr[10], i, even=0;

    for(i=0;i<10;++i)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);

        if(arr[i]%2==0)
        {
            even++;
        }
    }

    printf("Count of even numbers in array: %d\n", even);

    return 0;
}
