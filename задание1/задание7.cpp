#include <iostream>
#include <cmath>

int main() {
    int N = 9;

    int best_P = 1, best_Q = 1;
    int min_diff = 2000000000;

    for (int P = 1; P <= 1000; P++) {
        for (int Q = P; Q <= 1000; Q++) {
            int diff = abs(N - (P * P + Q * Q));

            if (diff < min_diff) {
                min_diff = diff;
                best_P = P;
                best_Q = Q;
            }
            else if (diff == min_diff && Q < best_Q) {
                best_P = P;
                best_Q = Q;
            }
        }
    }

    std::cout << "P = " << best_P << ", Q = " << best_Q << std::endl; // Для N=9 выведет 2 2

    return 0;
}