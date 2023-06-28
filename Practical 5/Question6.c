#include <stdio.h>

int main()
{
    int base, exp, count, ans=1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(count=1;count<=exp;count++)
    {
        ans *= base;
    }

    printf("%d to the power of %d is %d", base, exp, ans);

    return 0;
}
