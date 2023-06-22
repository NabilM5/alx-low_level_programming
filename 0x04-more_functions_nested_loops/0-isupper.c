#include "main.h"

/**
 * _isupper - the function that checks for uppercase character.
 *
 * Return: to 1 if c uppercase and to 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
