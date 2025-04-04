﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	double x, e, y_prev, y_curr;

	// Ввод исходных данных
	printf("Введите значение x: ");
	scanf("%lf", &x);
	printf("Введите значение e: ");
	scanf("%lf", &e);

	// Инициализация первого члена последовательности
	y_prev = x; // Начальное значение
	y_curr = 0;

	int i = 1;

	// Условие завершения
	do {
		// Вычисление следующего члена последовательности
		y_curr = 0.5 * (y_prev + (x / y_prev) - 1);

		// Обновление предыдущего числа
		i++;
	} while (fabs(y_curr * y_curr - y_prev * y_prev) < e);
	// Проверка условия завершения в while

	// Вывод результата
	printf("Первый член yn: %.10f\n", y_curr);

	return 0;
}
