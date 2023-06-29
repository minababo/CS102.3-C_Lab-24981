#include <stdio.h>

int main()
{
    char name[20];
    int by, age;

    printf("Input Name and Birth Year ");
    scanf("%s %d", &name, &by);

    age = 2023-by;

    printf("%s is %d years old", name, age);
}
