#include "main.h"
#include <stdio.h>

int _sqrt(int n, int p);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the sqrt an of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recurses to find the natural
 * sqrt of a number
 * @n: number to calculate the sqaure root of an
 * @p: iterator
 *
 * Return: the resulting sqrt
 */

int _sqrt(int n, int p)
{
	int sqrt = p * p;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (p);

	return (_sqrt(n, p + 1));
}
