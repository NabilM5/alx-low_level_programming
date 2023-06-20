#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 time
 *
 */
void print_alphabet_x10(void)
{
	int i, cha;

	for (i = 0; i <= 9; i++)
	{
		for (cha = 'a'; cha <= "z"; cha++)
			_putchar(cha);
		_putchar('\n');
	}
}
