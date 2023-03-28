#include "stdio.h"

/**
 * _puts -  prints a string
 *
 * @str: arg s
 *
 * Return: string to stdout
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
