#include <stdio.h>

int main()
{
    int num=0;

    //while loop
    while (num<=100)
    {
        printf("%d\n", num);
        num++;
    }

    //do while loop
    num = 0;
    do
    {
        printf("%d\n", num);
        num++;
    }while (num<=100);

    //for loop
    for (num=0; num<=100; num++)
    {
        printf("%d\n", num);
    }

    return 0;
}
