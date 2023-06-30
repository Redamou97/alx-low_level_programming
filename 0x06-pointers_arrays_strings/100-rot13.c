#include "main.h"

/**
 * rot13
 * @s: input string
 * Return: encodes string
 *
 */

char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUWXYZABCDEFGHIJMLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
