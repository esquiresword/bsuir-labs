/* Определить, имеется ли в одномерном числовом массиве A из n элементов хотя бы одна пара совпадающих по величине соседних элементов. */

#include<stdio.h>

int main()
{
	/* Variables */
	int elements_num;
	float digits[100];
	bool indicator = 0;

	/* Array input */
	printf("Enter the array elements number: ");
	scanf_s("%d", &elements_num);
	printf("Enter the array elements: ");
	for (int i = 0; i < elements_num; i++)
		scanf_s("%f", &digits[i]);

	/* Checking if there equal neighboors */
	for (int i = 0; i < elements_num - 1; i++)
	{
		if (digits[i] == digits[i + 1])
			indicator = 1;
	}
	if (indicator == 1)
		printf("There are!\n");
	else
		printf("There aren't\n");

	for (int i = 0; i < elements_num; i++) {
		printf("%0.0f ", digits[i]);
	}

	/* Return success code */
	return 0;
}
