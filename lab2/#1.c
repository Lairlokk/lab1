#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	printf("\n--- 1 ---\n");
	printf("123\n");
	printf("\n--- 2 ---\n");
	printf("1\n2\n3\n");
	printf("\n--- 3 ---\n");
	printf("1\n\t2\n\t\t3\n");
	printf("\n--- 4 ---\n");
	printf("%d\n\t%d\n\t\t%d\n\t\t\t%d\n", 1, 2, 3, 4);
	printf("\n--- 5,6 ---\n");
	printf("%.5f\n ", 12.234657);
	printf("\n--- 7 ---\n");
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("\n--- 8,9 ---\n");
	printf("7 / 5 = %.1f\n", 7.0 / 5.0);
	printf("2000 * 4 = %d\n", 2000 * 4);
	printf("\n--- 10 ---\n");
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("--- Меняем спецификаторы ---\n");
	printf("%d\n", 5.0 / 2.0); // d вместо g/e/f
	printf("%f\n", 5.0 / 2.0); // f
	printf("%g\n", 5.0 / 2.0); // g
	printf("%e\n", 5.0 / 2.0); // e
	return 0;
}