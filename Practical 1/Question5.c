#include <stdio.h>

int main()
{
    float num1, num2, avg;

    printf("Input integers ");
    scanf("%f %f", &num1, &num2);

    avg = (num1+num2)/2;

    printf("The average is %.2f\n", avg);
}
