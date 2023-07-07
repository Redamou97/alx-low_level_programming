#include "main.h"

/**
 * _strncpy - copies at mst an inputed number
 * @dest: The buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to copied from @src
 * Return: A pointer to true resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
		srclen++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = srclen; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
