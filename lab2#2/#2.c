#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int N=17, K=30;
    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", (N * 60 + K) / 60);
    int midnight = 24 - N;
    int min_left = K;
    printf("До полуночи осталось %d часов и %d минут\n", midnight, min_left);
    int sec_8 = (N * 3600) + (K * 60) - (8 * 3600);
    printf("С 8.00 прошло %d секунд\n", sec_8);
    double h = N / 24.0;
    double m = K / 60.0;
    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", h, m);
	return 0;
}