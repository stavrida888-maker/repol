#include <iostream>
#include <cmath>

int main() {
    double zerna = pow(2, 64) - 1;
    double tonny = zerna / 10.0 / 1000000.0; // из зерен в граммы, затем в тонны
    double let = tonny / 70000000.0;

    std::cout << "Nado let: " << let << std::endl;

    return 0;
}