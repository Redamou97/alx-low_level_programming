#include "main.h"

/**
 * _puts - prints a string ,followed by newline to stdout
 * @str: string to print
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
