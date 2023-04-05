#include "main.h"

int the_prime(int n, int p);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_prime(n, n - 1));
}

/**
 * the_prime - calculates whether a number is prime recursively
 * @n: number to evaluate
 * @p: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int the_prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (the_prime(n, p - 1));
}

