#include <stdarg.h>

/**
 * sum_them_all - sums all its optional parameters.
 * @n: number of parameters to be sum.
 * Return: sum, 0 if n = 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	return (sum);
}
