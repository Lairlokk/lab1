#include <stdio.h>
#include <locale.h>
#define D 2.54
int main() {
    setlocale(LC_ALL, "Rus");
    int dym;
    float result;
    printf("Âגוהטעו ךמכטקוסעגמ ה‏ילמג: ");
    scanf_s("%d", &dym);
    result = D * dym;
    printf("%d ה‏יל = %.2f סל\n", dym, result);
    return 0;
}