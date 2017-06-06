include <iostream>
#include <conio.h>
#include <math.h>
#define MAX 1000

int fact(double n) {
	double fact1 = 1;
	double a = 2 * n - 1;
	for (int i = 2; i <= a; i++) fact1 *= i;
	return fact1;
}

int main() {

	setlocale(LC_ALL, "Russian");

	double res1;
	double res2 = 0;
	double x;
	double e;
	double e1;
	int n = MAX;
	long double fact1 = 1;

	printf("Введите допустимую погрешность e = ");
	scanf("%lf", &e);
	printf("Введите x = ");
	scanf("%lf", &x);

	res1 = sin(x);

	for (int i = 1; i <= n; i++) {

		fact1 = fact(i);

		res2 += powl(-1, i - 1) * powl(x, 2 * i - 1) / fact1;

		e1 = abs(res2 - res1);

		if (e1 < e) {
			printf("Точность достигается при n = %d\n", i);
			break;
		}

	}

	printf("sin(x) = %f\n", res1);
	printf("Сумма ряда %f", res2);

	e1 = abs(res2 - res1);
	printf("\nРазность между значениями равна %f", e1);

	_getch();
	return 0;
}
