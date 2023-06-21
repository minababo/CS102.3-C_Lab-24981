#include <stdio.h>

int main()
{
    float basicS, sales, allowance = 0, bonus = 0, gross = 0;
    char city;
    int years;

    printf("Enter basic salary: ");
    scanf("%f", &basicS);

    printf("Enter monthly sales: ");
    scanf("%f", &sales);

    printf("Enter city: ");
    scanf(" %c", &city);

    printf("Enter number of years in service: ");
    scanf("%d", &years);

    if (sales > 0 && sales < 25000)
    {
        bonus = sales*0.1;
    }

    else if (sales >= 25000 && sales < 50000)
    {
        bonus = sales*0.12;
    }
    else if (sales >= 50000)
    {
        bonus = sales*0.15;
    }

    if (years > 5)
    {
        allowance += basicS * 0.1;
    }

    switch (city)
    {
        case 'C':
        case 'c':
            allowance += 2500;
            break;
        default:
            allowance += 0;
    }

    gross = basicS + bonus + allowance;

    printf("Gross Monthly Salary: %.2f\n", gross);

    return 0;
}
