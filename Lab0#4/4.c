#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int name();
int date();

int main()
{
	name();
	date();
	return 0;
}
int name()
{
	setlocale(LC_ALL, "RUS");
	puts("*******************************************");
	puts("* Тема: Разработка консольного приложения *");
	puts("* Выполнила: Лычаная Полина, гр.261       *");
	puts("*******************************************");
}
int date()
{
	setlocale(LC_ALL, "RUS");
	puts("_   _   _  _   _  _");
	puts(" | | | | | _| | | /");
	puts("/_ |_| |_| _| |_| |");
	puts("");
}