#include <stdio.h>

int main() {
    int inp, reverse=0, lastdig, temp, nood=0;

    printf("Enter number: ");
    scanf("%d", &inp);

    temp = inp;
    while (temp!=0)
    {
        temp /= 10;
        nood++;
    }

    do {
        lastdig = inp%10;
        reverse = reverse*10+lastdig;
        inp /= 10;
        nood--;
    } while (nood>0);

    printf("Reversed number: %d", reverse);
    return 0;
}
