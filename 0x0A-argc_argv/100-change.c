#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that does all the mathematics
 * @p: Passed in variable from main for calculations
 * iPatos
 * Return: The number of coins needed minimum for the passed in variable
 */
int coinConverter(int p)
{
	int count = 0;

	while (p != 0)
	{
		if (p % 10 == 9 || p % 10 == 7)
			p -= 2;
		else if (p % 25 == 0)
			p -= 25;
		else if (p % 10 == 0)
			p -= 10;
		else if (p % 5 == 0)
			p -= 5;
		else if (p % 2 == 0)
		{
			if (p % 10 == 6)
				p -= 1;
			else
				p -= 2;
		}
		else
			p -= 1;

		count++;
	}

	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * iPatos
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int p, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);

	if (p < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(p);

		printf("%d\n", coin);
	}

	return (0);
}
