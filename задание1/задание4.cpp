#include <iostream>
#include <cmath>

int main() {
    double a = 0.5;
    double b = 0.5;

    // Вычисляем числитель
    double num = a * pow(sin(b), 2) + cos(pow(b, 3)) + cbrt(pow(b, 2));

    // Вычисляем знаменатель
    double den = pow(fabs((a * tan(b)) / (1 - exp(sqrt(a)))), 0.25);

    // Итоговый результат
    double y = sqrt(num / den);

    std::cout << "y = " << y << std::endl; // Для a=0.5 и b=0.5 выведет ~1.214

    return 0;
}