#include <stdio.h>

int main()
{
   //Question 1 (part 1)
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num%2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);


    //Question 1 (part 2)
    int numero, mod;

    printf("Enter number: ");
    scanf("%d", &numero);

    mod = numero%2;

    switch (mod)
    {
        case 0:
            printf("Even\n");
            break;
        default:
            printf("Odd");
    }

    return 0;
}
