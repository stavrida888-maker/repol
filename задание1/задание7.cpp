#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>

int main() {
    int N;
    printf("Vvedite N (1 <= N <= 1000000): ");
    scanf("%d", &N);

    if (N < 1 || N > 1000000) {
        printf("Oshibka: N dolzno byt oy 0 do 1000000\n");
        return 1;
    }
    int limit = (int)sqrt(N) + 1;

    int best_P = 1, best_Q = 1;
    int min_diff = abs(N - 2);

        for (int P = 1; P <= limit; P++) {
            for (int Q = P; Q <= limit; Q++) {
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

    printf("P = %d, Q = %d\n", best_P, best_Q);

    return 0;
}
