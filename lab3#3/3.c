#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    double a, b;
    printf("¬ведите число a: ");
    scanf_s("%lf", &a);
    printf("¬ведите число b: ");
    scanf_s("%lf", &b);
    printf("-------------------------------\n");
    printf("| %7s | %7s | %7s |\n", "a*b", "a+b", "a-b");
    printf("-------------------------------\n");
    printf("|%3.0lf * %-3.0lf| %2.0lf + %-2.0lf |%3.0lf - %-2.0lf |\n", a, b, a, b, a, b);
    printf("-------------------------------\n");
    double prod = a * b;
    double sum = a + b;
    double m = a - b;
    printf("|%8.0f |%8.0f |%8.0f |\n", prod, sum, m);
    return 0;
}