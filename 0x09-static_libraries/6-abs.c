#include "main.h"

/**
 * _abs - comouts the absolute value of an integer.
 * @c: the number to be continue
 * Return: 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
