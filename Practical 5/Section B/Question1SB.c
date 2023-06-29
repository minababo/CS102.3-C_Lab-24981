#include <stdio.h>

int main()
{
    int num, count, p=0, n=0, z=0;

    for (count=0;count<10;++count)
    {
        printf("Enter number %d: ", count+1);
        scanf("%d", &num);

        if(num>0)
        {
            p++;
        }
        else if(num<0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }

    printf("Positive: %d\n", p);
    printf("Negative: %d\n", n);
    printf("Zeros: %d\n", z);

    return 0;
}
