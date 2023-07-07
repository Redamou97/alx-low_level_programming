#include "main.h"

/**
 * _strlen - that returns the length of a string
 * @s: The string to get the length of.
 * Return: Lengeth of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0 ; *s != '\0'; s++)
		++counter;
	return (counter);
}
