#include <iostream>
#include <cmath>

int main() {
    int h = 2;
    int m = 43;

    // Угол часовой и минутной стрелки от 12 часов
    double angle_h = (h % 12) * 30.0 + m * 0.5;
    double angle_m = m * 6.0;

    // Абсолютная разница между ними
    double diff = fabs(angle_h - angle_m);

    // Выбираем наименьший угол (не больше 180 градусов)
    if (diff > 180.0) {
        diff = 360.0 - diff;
    }

    std::cout << "Min angle: " << diff << std::endl; // Выведет 176.5

    return 0;
}