#include "main.h"

/**
 * _islower - print lowercase character
 *
 * @c: checks input
 *
 * Return: to 1 successful
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
