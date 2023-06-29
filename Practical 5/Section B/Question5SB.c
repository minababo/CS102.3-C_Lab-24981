#include <stdio.h>

int main()
{
    int empNo=0, otPay, hours, otCount=0, totCount=0;

    while(empNo!=-999)
    {
        printf("Enter the employee number (-999 to stop): ");
        scanf("%d", &empNo);

        if(empNo==-999)
            break;

        printf("Enter the hours worked: ");
        scanf("%d", &hours);

        if(hours>=40)
        {
            otPay = 200*(hours-40)+40*150;
            if(otPay>4000)
            {
                otCount++;
            }
        }
        else
        {
            otPay = 150*hours;
            if(otPay>4000)
            {
                otCount++;
            }
        }
        totCount++;

        printf("Employee %d earned %d\n\n", empNo, otPay);
    }

    if(totCount>0)
    {
        double percentage = (double)otCount/totCount*100.0;
        printf("Percentage of employees with overtime payment exceeding 4000: %.2lf%%\n", percentage);
    }
    else
    {
        printf("No employees were processed\n");
    }

    return 0;
}
