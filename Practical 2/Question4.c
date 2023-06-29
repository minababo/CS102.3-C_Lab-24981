#include <stdio.h>

int main() {
    double c, f;
    printf("Input temperature in degrees Fahrenheit ");
    scanf("%lf", &f);

    c = (5.0/9.0)*(f-32);

    printf("Temperature in degrees Celsius is %.1lf\n", c);
}
