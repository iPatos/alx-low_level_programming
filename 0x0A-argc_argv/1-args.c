#include "main.h"
#include <stdio.h>
/**
 * main - print number of arg
 * @argv: array
 * @argc: number of arg
 * iPatos
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
