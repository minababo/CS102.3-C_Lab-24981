#include <stdio.h>

int main()
{
    int num1, num2, mod;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    mod = num1%num2;

    if (mod==0)
    {
        printf("%d is a multiple of %d\n", num1, num2);
    }
    else
    {
        printf("%d is not a multiple of %d\n", num1, num2);
    }

    return 0;
}
