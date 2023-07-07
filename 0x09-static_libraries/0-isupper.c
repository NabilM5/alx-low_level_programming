#include "main.h"

/**
 * _isupper - the function that checks for uppercase character.
 *
 * @c: to check if it is uppercase or not.
 *
 * Return: to 1 if c uppercase and to 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
