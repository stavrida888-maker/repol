#include <iostream>
#include <cmath>

int main() {
    double zerna = ~0ULL;
    double let = ceil(zerna / 7e14);

    std::cout << "Nado let: " << let << std::endl;

    return 0;
}
