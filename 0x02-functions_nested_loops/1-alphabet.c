#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 *
 * Return: to 0 successful
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
