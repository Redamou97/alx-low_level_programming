#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, m;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (m = 0; accept[m] != s[l]; m++)
		{
			if (accept[m] == '\0')
				return (l);
		}
	}
	return (l);
}
