#include <stdio.h>

int main()
{
    int num, dig, tot = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num>0)
    {
        dig = num%10;
        printf("(%d)\n", dig);
        tot += dig;
        num /= 10;
        printf("%d\n", num);
    }

    printf("The sum of all digits is %d", tot);
    return 0;
}
