#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
    int rub, kop;

    printf("Vvedite rubli i kopejki: ");
    scanf("%d %d", &rub, &kop);

    int start_money = rub * 100 + kop;
    int money = start_money;
    int max_money = money;
    int best_passes = 0;
    int passes = 0;

    if (money >= 29)
    {
        do{
       
            passes++;

            money = money - 29;

            int r = money / 100;
            int k = money % 100;

            money = k * 100 + r;
            if (money > max_money)
        {
            max_money = money;
            best_passes = passes;
        }
        } while (money >= 29 && money != start_money);
    }

    printf("max summa: %d r. %d k.\n", max_money / 100, max_money % 100);
    printf("optimalnoe chislo prohodov : % d\n", best_passes);

    return 0;
}
