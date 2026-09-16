#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, y;

    printf("Vvedite a i b: ");
    scanf("%lf %lf", &a, &b);

    y = sqrt((pow(a, pow(sin(b), 2) + cos(pow(b, 3))) + cbrt(pow(b, 2))) / pow(fabs((a * tan(b)) / (1 - exp(sqrt(a)))), 0.25));

    printf("y = %.3f\n", y);

    return 0;
}
