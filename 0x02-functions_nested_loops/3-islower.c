#include "main.h"

/**
 * islower - function to check if
 *          charcter is lowecase
 *
 * 0c: checks input of function
 *
 * Return: retutrs 1 if 'c' is lowercase
 *         otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
