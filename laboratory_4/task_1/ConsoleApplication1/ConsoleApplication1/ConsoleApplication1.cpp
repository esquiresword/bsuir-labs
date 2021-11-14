/* Ввести массив вещественных чисел размером n, n вводится с клавиату-ры. 
Найти его наибольший и наименьший элементы и поменять их местами. Найти сумму и произведение всех элементов массива. */

#include <stdio.h>

int main()
{
	/* Variables */
	int elements_num, i, index_min = 0, index_max = 0;
	float digits[100], min, max, temp, sum, product;

	/* Massive input */
	printf("Enter the number of massive elements: ");
	scanf_s("%d", &elements_num);
	printf("Enter massive element divided by space: ");
	for (int i = 0; i < elements_num; i++)
		scanf_s("%f", &digits[i]);

	/* Finding min and max massive elements and their indexes */
	min = digits[0];
	max = digits[0];
	for (i = 0; i < elements_num; i++)
	{
		if (digits[i] < min)
		{
			min = digits[i];
			index_min = i;
		}
		if (digits[i] > max)
		{
			max = digits[i];
			index_max = i;
		}
	}

	/* Primary massive output */
	printf("Primary massive:\n");
	for (i = 0; i < elements_num; i++)
		printf("%0.2f ", digits[i]);

	/* Changed massive output (min & max places changed) */
	temp = digits[index_min];
	digits[index_min] = digits[index_max];
	digits[index_max] = temp;
	printf("\nChanged massive:\n");
	for (i = 0; i < elements_num; i++)
		printf("%0.2f ", digits[i]);

	/* Sum and product calculating */
	sum = 0;
	product = 1;
	for (i = 0; i < elements_num; i++)
	{
		sum = sum + digits[i];
		product = product * digits[i];
	}

	/* Sum and product output */
	printf("\nSum of massive elements is %0.2f\n", sum);
	printf("Product of massive elements is %0.2f\n", product);

	/* Return success code */
	return 0;
}
