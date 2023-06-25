#include <stdio.h>

int main()
{
    int count, marks;
    float tot = 0, avg;

    for (count = 1; count <= 10; ++count)
    {
        printf("Enter marks: ");
        scanf("%d", &marks);

        tot += marks;
        avg = tot / count;
    }

    if (avg < 50)
    {
        printf("Fail!");
    }
    else
    {
        printf("Pass!");
    }

    return 0;
}
