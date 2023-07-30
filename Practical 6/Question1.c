#include <stdio.h>

int main()
{
    int num[10], min, max, total = 0;
    float avg;

    printf("Enter num1: ");
    scanf("%d", &num[0]);

    min = num[0];
    max = num[0];

    total += num[0];

    for (int i = 1; i <= 9; i++)
    {
        printf("Enter num %d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] < min)
            min = num[i];

        if (num[i] > max)
            max = num[i];

        total += num[i];
    }

    avg = (float)total / 10.0;

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);

    printf("Reversed order of values: ");

    for (int i = 9; i >= 0; i--)
        printf("%d ", num[i]);

    return 0;
}
