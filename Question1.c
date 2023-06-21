#include <stdio.h>

int main()
{
    int num1, num2, high;

    printf("Enter number 1 and 2: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
        high = num1;
    else
        high = num2;

    printf("Highest number is %d", high);

    return 0;
}
