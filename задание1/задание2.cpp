#include <iostream>

int main() {
    int K = 4000;

    int chas = K / 3600;
    int min = (K % 3600) / 60;
    int sec = K % 60;

    std::cout << chas << " chas " << min << " min " << sec << " sec" << std::endl;

    return 0;
}