/* Дана матрица размером 6 x 6. Найти сумму наименьших элементов ее нечетных строк и наибольших элементов ее четных строк. */

#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main(){
	setlocale(LC_ALL, "rus");
	int* a;
	int i, j;
	a = (int*)malloc(4 * 4 * sizeof(int));
	printf("Введите элементы матрицы размером 4x4, начиная с первого элемента первой строки и двигаясь по строкам: \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			scanf_s("%d", a + i * 4 + j);
	}
	int sum = 0, sum1 = 0, sum2 = 0;
	for (int i = 0; i < 4; i++)
	{
		int max = *(a + i * 4 + 0);
		int min = *(a + i * 4 + 0);
		for (int j = 0; j < 4; j++)
		{
			if (*(a + i * 4 + j) < min)
				min = *(a + i * 4 + j);
			if (*(a + i * 4 + j) > max)
				max = *(a + i * 4 + j);
		}
		if (i % 2 == 1)
			sum1 = sum1 + min;
		else if (i % 2 == 0)
			sum2 = sum2 + max;
	}
	sum = sum1 + sum2;
	printf("Сумма равна: %d", sum);
}
