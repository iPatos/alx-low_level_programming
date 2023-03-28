#include "stdio.h"

/**
 * print_array -Print  n elements of an array of intigers
 * @a: Array of intigers
 * @n: Number of elements the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d, ", a[j]);
		if (j == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
