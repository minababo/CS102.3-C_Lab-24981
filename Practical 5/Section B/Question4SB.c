#include <stdio.h>

int main()
{
    int empNo=0, basicS, count=0;

    while(empNo!=-999)
    {
        printf("Enter employee number (-999 to stop): ");
        scanf("%d", &empNo);

        if(empNo!=-999)
        {
            printf("Enter basic salary: ");
            scanf("%d", &basicS);

            if(basicS>=5000)
            {
                ++count;
            }
        }
    }

    printf("Employees with basic salary >= 5000: %d\n", count);

    return 0;
}
