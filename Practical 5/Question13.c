#include <stdio.h>

int main()
{
    int num, sum=0;

    printf("Enter numbers to add (enter -1 to stop):\n");

    while(num!=-1)
    {
        scanf("%d", &num);

        sum+=num;
    }

    sum+=1;

    printf("Sum: %d\n", sum);

    return 0;
}
