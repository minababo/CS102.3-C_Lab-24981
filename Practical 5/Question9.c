#include <stdio.h>

int main()
{
    char let='A';

    do
    {
        int ascii=let;
        printf("%c: %d\n", let, ascii);

        let++;
    } while (let<='Z');

    return 0;
}
