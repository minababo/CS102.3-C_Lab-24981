#include <stdio.h>

int main()
{
    int num1, num2;
    float result;
    char op;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter operator\n + Addition\n - Subtraction\n * Multiplication\n / Division\n: ");
    scanf(" %c", &op);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = (float)num1 / num2;
            break;
        default:
            printf("Invalid operator");
            return 0;
    }

    if (op == '/')
    {
        printf("%d %c %d = %.2f", num1, op, num2, result);
    }
    else
    {
        printf("%d %c %d = %.0f", num1, op, num2, result);
    }

    return 0;
}
