#include <stdio.h>

int main()
{
    int num1, num2, num3, high, low;

    printf("Enter 3 integer numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
        high = num1;
    else if (num2 > num1 && num2 > num3)
        high = num2;
    else
        high = num3;

    if (num1 < num2 && num1 < num3)
        low = num1;
    else if (num2 < num1 && num2 < num3)
        low = num2;
    else
        low = num3;

    printf("The highest value would be %d\n", high);
    printf("The lowest value would be %d", low);

    return 0;
}
