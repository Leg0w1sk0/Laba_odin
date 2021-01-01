#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, max, ind;
	float N, y, x;
	double sum, sr;
	i = 0;
	max = 0;
	ind = 0;
	sum = 0;
	printf("Если вы введете не натуральное число, то нужно будет ввести это число еще раз\n");
	do {
		do {
			N = 0;
			printf("Число номер %d\n", i + 1);
			scanf("%f", &N);
			y = N;
			while (y >= 1) {
				y = y - 1;
			}
			if (y != 0 || N < 0) {
				printf("Введено не натуральное число\n");
				break;
			}
			if (N != 0) {
				x = N;
				sum = sum + (1 / N);
			}
			if (N == 0) {
				printf("Введен ноль, ввод закончен\n");
				break;
			}
			if (N > max) {
				max = N;
				ind = i + 1;
			}
			i = i + 1;
		} while (N > 0 && y == 0);
		if (N == 0) {
			break;
		}
	} while (N <= 0 || y != 0);
	sr = (i) / sum;
	printf("Номер максимального числа: %d\nСреднее гармоническое %lf", ind, sr);
	return 0;
}