#include "main.h"

/**
 * _strncat - concatenates two strings using at rest
 * @dest: the string to be appended
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destline = 0;

	while (dest[index++])
		destline++;

	for (index = 0; src[index] && index < n; index++)
		dest[destline++] = src[index];
	return (dest);
}
