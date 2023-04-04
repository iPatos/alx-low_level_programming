#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 * done by iPatos
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++)
	{
		dest[x] = src[x];
		n -= 1;
	}
	return (dest);
}
