#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	double x1; // первая переменная x1
	double e1; // вторая e1
	double y_prev1; // третья переменная
	double y_curr1; // четвертая 

	// Ввод исходных данных
	printf("Введите значение x: ");
	scanf("%lf", &x1);
	printf("Введите значение e: ");
	scanf("%lf", &e1);

	// Инициализация первого члена последовательности
	y_prev1 = x1; // Начальное значение
	y_curr1 = 0;

	int i = 1;

	// Условие завершения
	do {
		// Вычисление следующего члена последовательности
		y_curr = 0.5 * (y_prev1 + (x1 / y_prev1) - 1);

		// Обновление предыдущего числа
		i++;
	} while (fabs(y_curr1 * y_curr1 - y_prev1 * y_prev1) < e1);
	// Проверка условия завершения в while

	// Вывод результата
	printf("Первый член yn: %.10f\n", y_curr1);

	return 0;
}
