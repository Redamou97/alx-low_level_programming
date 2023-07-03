#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: input
 * @c: input
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] >= '\0'; l++)
	{
		if (s[l] == c)
			return (s + l);
	}
	return (NULL);
}
