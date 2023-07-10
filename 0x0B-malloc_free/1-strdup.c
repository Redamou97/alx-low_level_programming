#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to Duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	int m = 0, n = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[n])
	{
		n++;
	}
	s = malloc((sizeof(char) * n) + 1);
	if (s == NULL)
		return (NULL);

	while (m < n)
	{
		s[m] = str[m];
		m++;
	}
	s[m] = '\0';
	return (s);
}
