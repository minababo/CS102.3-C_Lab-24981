#include<stdio.h>
 int main()
{
    int inp,rem,sum=0,temp;

    printf("Enter number: ");
    scanf("%d",&inp);

    temp=inp;

    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }

    if(inp==sum)
        printf("Armstrong  Number ");
    else
        printf("Not an Armstrong Number");

    return 0;
}
