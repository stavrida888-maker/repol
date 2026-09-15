#include <iostream>
#include <cmath>

int main() {
    double a = 0.5;
    double b = 0.5;
    double y = sqrt((a * pow(sin(b), 2) + cos(pow(b, 3)) + cbrt(pow(b, 2))) / pow(fabs((a * tan(b)) / (1 - exp(sqrt(a)))), 0.25));

    std::cout << "y = " << y << std::endl;

    return 0;
}
неправильно!!!
