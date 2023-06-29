#include <stdio.h>

int main()
{
    int no1, no2, st;
    printf("Input two numbers ");
    scanf("%d %d", &no1, &no2);
    printf("Before swapping, number 1 is %d and number 2 is %d\n", no1, no2);

    st = no1;
    no1 = no2;
    no2 = st;

    printf("After swapping, number 1 is %d and number 2 is %d\n", no1, no2);
}
