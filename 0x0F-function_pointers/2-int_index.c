#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in the array
 * @cmp: pointer to function of one of the 3 in main
 * iPatos
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}

