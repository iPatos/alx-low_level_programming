#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * iPatos
 * Description: create array of size and assign char c
 * Return: pointer to array,or else  NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int p;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		str[p] = c;
	return (str);
}
