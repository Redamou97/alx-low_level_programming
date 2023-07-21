#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all -  that returns the sum of all its parameters
 * @n: a numeber
 * @...: a variable number of paramters
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int i, sum = 0;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	       sum += va_arg(ar, int);

	va_end(ar);
	return (sum);
}
