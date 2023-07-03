#include "main.h"

/**
 * _strchr - Gets the length of a prefix substring.
 *
 * @s: The string to be searched.
 *
 * @c: The prefix to be measured.
 *
 * Return: The number of b (bytes) in s which
 *         consist only of b from accept.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
