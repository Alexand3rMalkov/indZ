#include <stdio.h>
#define POS 1
#define PAR 2
float resistor(float a, float b, int type)
{
    if (type == POS)
        return a + b;
    if (type == PAR)
        return (a * b) / (a + b);
}
int main(void)
{
    printf("%f\n", resistor(50, 20, POS));
    printf("%f\n", resistor(50, 100, PAR));
}
