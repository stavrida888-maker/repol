int main()
{
    int rub, kop;

    printf("Vvedite rubli i kopejki: ");
    scanf("%d %d", &rub, &kop);

    int money = rub * 100 + kop;
    int max_money = money;
    int best_passes = 0;
    int passes = 0;

    while (money >= 29 && passes < 1000)
    {
        passes += 1;

        money = money - 29;

        int r = money / 100;
        int k = money % 100;

        money = k * 100 + r;
        if (money > max_money)
        {
            max_money = money;
            best_passes = passes;
        }
    }

    printf("max summa: %d r. %d k.\n", max_money / 100, max_money % 100);
    printf("optimalnoe chislo prohodov : % d\n", best_passes);

    return 0;
}
нужно использовать do while
