#include <stdio.h>
int main()
{
    float v, s, t;

    printf("Input distance travelled in metres ");
    scanf("%f", &s);
    printf("Input time taken in seconds ");
    scanf("%f", &t);

    v = s/t;

    printf("Average Speed is %.2f m/s\n", v);
}
