#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of comm line arguments
 * @argv: Array name
 * iPatos
 * Return: 1 if not enough arguments passed, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int p, r;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = 1;

		for (p = 1; p < 3; p++)
			r *= atoi(argv[p]);

		printf("%d\n", r);
	}

	return (0);
}
