#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * iPatos
 * Return: 0
 *
 */

char *_strdup(char *str)
{
	char *aaa;
	int p, r = 0;

	if (str == NULL)
		return (NULL);
	p = 0;
	while (str[p] != '\0')
		p++;

	aaa = malloc(sizeof(char) * (p + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
