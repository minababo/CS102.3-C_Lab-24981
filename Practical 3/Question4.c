#include <stdio.h>

int main()
{
    const float pi = 3.14159;
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Diameter: %.2f\n", 2*r);
    printf("Circumference: %.2f\n", 2*pi*r);
    printf("Area: %.2f\n", pi*(r*r));

    return 0;
}
