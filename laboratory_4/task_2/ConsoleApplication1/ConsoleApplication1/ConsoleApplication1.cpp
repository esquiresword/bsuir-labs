/* В одномерном массиве, состоящем из n вещественных элементов,
вычислить: - максимальный элемент массива; - сумму элементов массива, рас-положенных до последнего положительного элемента. */

#include <stdio.h>

int main()
{
	/* Variables */
	int elements_num, last_positive_index = 0;
	float digits[100], sum = 0, max;

	/* Massive input */
	printf("Enter the number of massive elements: ");
	scanf_s("%d", &elements_num);
	printf("Enter the massive elements: ");
	for (int i = 0; i < elements_num; i++)
		scanf_s("%f", &digits[i]);

	/* Finding max and last positive element's index */
	max = digits[0];
	for (int i = 0; i < elements_num; i++)
	{
		if (digits[i] > max)
			max = digits[i];
		if (digits[i] > 0)
			last_positive_index = i;
	}

	/* Calculating sum before last positive */
	if (last_positive_index != 0) {
		for (int i = 0; i < last_positive_index; i++)
			sum = sum + digits[i];
		printf("\nSum of elements before last positive is %0.2f\n", sum);
	}
	if (last_positive_index == 0) {
		printf("Sum can't be count, because there are no positive elements or only first element is so.");
	}

	/* Max and sum output */
	printf("Max massive element is %0.2f", max);

	/* Return success code */
	return 0;
}
