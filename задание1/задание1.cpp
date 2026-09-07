#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main() {
    double R = 5;
    double p = M_PI;

    double L = 2 * R * p;
    double S = p * R * R;
    double ploshad_pov = 4 * S;
    double V = (4.0 / 3.0) * S * R;

    std::cout << "L = " << L << std::endl;
    std::cout << "S = " << S << std::endl;
    std::cout << "Ploshchad' pov = " << ploshad_pov << std::endl;
    std::cout << "V = " << V << std::endl;

    return 0;
}