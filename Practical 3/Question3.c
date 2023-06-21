#include <stdio.h>

int main()
{
    char empN[25];
    int basicS, newS;

    printf("Enter the employee name: ");
    scanf("%s", &empN);

    printf("Enter the basic salary: ");
    scanf("%d", &basicS);

    if (basicS < 5000 && basicS > 0)
    {
        newS = basicS + (basicS * 0.05);
        printf("%s has a new salary of %d\n", empN, newS);
    }
    else if (basicS >= 5000 && basicS < 10000)
    {
        newS = basicS + (basicS * 0.10);
        printf("%s has a new salary of %d\n", empN, newS);
    }
    else if (basicS >= 10000)
    {
        newS = basicS + (basicS * 0.15);
        printf("%s has a new salary of %d\n", empN, newS);
    }
    else
    {
        printf("Error");
    }

    return 0;
}
