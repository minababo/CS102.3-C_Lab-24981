#include <stdio.h>

int main()
{
    int numTerms=10,first=0, second=1,count=0;

    printf("Fibonacci Sequence: ");

    while (count < numTerms)
    {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
        count++;
    }

    return 0;
}
