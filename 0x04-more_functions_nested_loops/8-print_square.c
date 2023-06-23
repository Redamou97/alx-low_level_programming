#include "main.h"

/**
 * print_square - print a square using the chracter #
 *
 * @size: is the size of the square
 *
 * Return: empty
 */

void print_square(int size)
{
	int row, colum;

	for (row = 0; row < size; row++)
	{
		for (colum = 0; colum < size; colum++)
			_putchar('#');
		_putchar('\n');
	}
}
