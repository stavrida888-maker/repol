#include <iostream>

int main() {
    int r = 76;
    int k = 99;

    int max_money = r * 100 + k;
    int best_steps = 0;

    int cur_r = r;
    int cur_k = k;
    int step = 0;

    while (true) {
        int total_kop = cur_r * 100 + cur_k;
        if (total_kop < 29) break; // Нельзя отдать 29 копеек

        total_kop -= 29;
        cur_r = total_kop / 100;
        cur_k = total_kop % 100;

        // Меняем местами рубли и копейки
        int temp = cur_r;
        cur_r = cur_k;
        cur_k = temp;

        step++;

        int current_val = cur_r * 100 + cur_k;
        if (current_val > max_money) {
            max_money = current_val;
            best_steps = step;
        }
    }

    std::cout << "Optimal steps: " << best_steps << std::endl; // Для 76r 99k выведет 81

    return 0;
}