#include <stdio.h>
#include <locale.h>
#define D 2.54
#define L 2.7076
int main() {
    setlocale(LC_ALL, "Rus");
    int dym; 
    float res; 
    printf("¬ведите количество дюймов: "); 
    scanf_s("%d", &dym); 
    res = D * dym; 
    printf("%d дюйм = %.2f см\n", dym, res);
    int l;
    float r;
    printf("¬ведите количество старолитовских дюймов: ");
    scanf_s("%d", &l);
    r = L * l;
    printf("%d стл.дюйм = %.2f см\n", l, r);
    return 0;
}