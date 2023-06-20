#include "main.h"

/**
 * main -is the entry point of the program.
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
