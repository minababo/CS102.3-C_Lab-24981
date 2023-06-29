#include <stdio.h>

int main()
{
    int marks, i, max, min, sum=0;
    float avg;

    for(i=0;i<10;++i)
    {
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", &marks);

        sum+=marks;

        if(i==0)
        {
            max=marks;
            min=marks;
        }
        else
        {
            if(marks>max)
            {
                max=marks;
            }

            if(marks<min)
            {
                min=marks;
            }
        }
    }

    avg=(float)sum/10;

    printf("Maximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);
    printf("Average marks: %.2f\n", avg);

    return 0;
}
