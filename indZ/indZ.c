#include <stdio.h>
#define POSL 1
#define PARAL 2
float resist(float a, float b, int type)
{
    if (type == POSL)
        return a + b;
    if (type == PARAL)
        return (a * b) / (a + b);
}
int main(void)
{
    printf("%f\n", resist(50, 20, POSL));
    printf("%f\n", resist(50, 100, PARAL));
}