/* 
3.В одномерном массиве, состоящем из n вещественных элементов, вычислить:
- максимальный элемент массива;
- сумму элементов массива, расположенных до последнего положительного элемента.
 */

#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main(){
	setlocale(LC_ALL, "rus");
	int* a;
	int i, n;
	printf("Введите размерность массива: ");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", a + i);
	}
	int max = *a, index_pol;
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > max)
			max = *(a + i);
		if (*(a + i) > 0)
			index_pol = i;
	}
	for (int i = 0; i < index_pol; i++)
		sum = sum + *(a + i);
	printf("Максимальный элемент массива равен %d", max);
	printf("\nСумма элементов массива, расположенных до послед-него положительного элемента, равна % 0.2f", sum);
	return 0;
}
