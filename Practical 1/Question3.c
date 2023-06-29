#include <stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("Input integer ");
    scanf("%d", &i);
    printf("Input float ");
    scanf("%f", &f);
    printf("Input double ");
    scanf("%lf", &d);
    printf("Input char ");
    scanf(" %c", &c);

    printf("Integer - %d\n", i);
    printf("Float - %.1f\n", f);
    printf("Double - %.2lf\n", d);
    printf("Char - %c\n", c);
}
