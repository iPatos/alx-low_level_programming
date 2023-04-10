#include "main.h"
#include <stdlib.h>
/**
 * main - program print received ard
 * @argc: nbr of comm
 * @argv: array
 * iPatos
 * Return:0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
