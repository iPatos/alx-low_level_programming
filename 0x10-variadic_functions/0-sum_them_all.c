#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of param passed to the function.
 * @...: A variable number of param to calculate the sum of.
 * iPatos
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all param.
 */

int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int p, sum = 0;


		va_start(ap, n);


		for (p = 0; p < n; p++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}
