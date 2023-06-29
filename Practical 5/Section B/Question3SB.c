#include <stdio.h>

int main()
{
    int price, great=0, sum=0, count=1;
    double avg;

    while (count <= 10)
    {
        printf("Enter price of item %d: ", count);
        scanf("%d", &price);

        if(price>200)
        {
            ++great;
        }

        sum+=price;

        ++count;
    }

    avg =(double)sum/10;

    printf("Items greater than 200: %d\n", great);
    printf("Average value: %.2lf\n", avg);

    return 0;
}
