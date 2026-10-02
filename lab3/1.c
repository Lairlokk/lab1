#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int num1, num2;
    puts("Введите первое целое число:");
    scanf_s("%d", &num1);
    printf("Введено число: %d\n", num1);
    puts("Введите второе целое число:");
    scanf_s("%d", &num2);
    printf("Введено число: %d\n", num2);
    printf("Сумма: %d\n", num1 + num2);
    printf("Разность: %d\n", num1 - num2);
    printf("Произведение: %d\n", num1 * num2);
    if (num2 != 0) {
        printf("Частное: %d\n", num1 / num2);
        printf("Остаток от деления: %d\n", num1 % num2);
    }
    else {
        printf("Ошибка: деление на ноль невозможно.\n");
        printf("Частное и остаток не могут быть вычислены.\n");
    }
    return 0;
}