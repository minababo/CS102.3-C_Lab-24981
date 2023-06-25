#include <stdio.h>

int main()
{
    double pi=3.14159, r, calc;
    int cav;

    printf("Choose calculation needed\n 1) Circumference\n 2) Area\n 3) Volume\n:");
    scanf("%d", &cav);

    switch (cav)
    {
        case 1:
            printf("Enter radius: ");
            scanf("%lf", &r);
            calc = 2*pi*r;
            printf("Circumference of the circle is %.2lf", calc);
            break;
        case 2:
            printf("Enter radius: ");
            scanf("%lf", &r);
            calc = pi*(r*r);
            printf("Area of the circle is %.2lf", calc);
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%lf", &r);
            calc = 4/3.0*(pi*(r*r*r));
            printf("Volume of the sphere is %.2lf", calc);
            break;
        default:
            printf("Invalid option");
            return 0;
    }
}
