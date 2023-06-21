#include <stdio.h>

int main()
{
    char c[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
    int num_c = sizeof(c)/sizeof(char);

    for (int i=0; i<num_c; i++)
    {
        printf("Integer equivalent of %c: %d\n", c[i], c[i]);
    }

    return 0;
}
