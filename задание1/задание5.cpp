#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int main() {
    int h, m;

    printf("Vvedite chasy i minyty: ");
    scanf("%d %d", &h, &m);

    double hour_angle = 30.0 * (h % 12) + 0.5 * m;
    
    double minute_angle = 6.0 * m;
    
    double diff = fabs(hour_angle - minute_angle);
    if (diff > 180.0)
    {
        diff = 360.0 - diff;
    }

    printf("%.1f\n", diff);

    return 0;
}
НУЖНО ИСПОЛЬЗОВАТЬ ТЕРНАРНЫЙ ОПЕРАТОР
