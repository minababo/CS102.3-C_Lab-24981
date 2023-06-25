#include <stdio.h>

int main()
{
    int inp, fac=1, num;

    printf("Enter number: ");
    scanf("%d", &inp);

    for (num=1;num<=inp; num++)
    {
        fac *= num;
    }

    printf("Factorial of %d is %d", inp, fac);

    return 0;
}
