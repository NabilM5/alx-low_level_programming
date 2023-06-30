#include "main.h"
#include <stdio.h>

/**
 * print_able_ASCII - Function checks n if printable ascii
 *
 * @n: integer
 *
 * Return: to 1 if True, to 0 if False
 */
int print_able_ASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * print_Hexas - function prints the hexadicimal values of b
 *
 * @b: string to print
 *
 * @start: takes starting position
 *
 * @end: takes ending position
 */
void print_Hexas(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * print_ASCII - function prints ASCII values of a string b
 * if char is not printable replaced with a ('.')
 *
 * @b: string to print
 *
 * @start: starting position
 *
 * @end: ending position
 */
void print_ASCII(char *b, int start, int end)
{
	int cha, i = 0;

	while (i < end)
	{
		cha = *(b + i + start);
		if (!print_able_ASCII(cha))
			cha = 46;
		printf("%c", cha);
		i++;
	}
}
/**
 * print_buffer - function prints a buffer
 *
 * @b: string
 *
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			print_Hexas(b, start, end);
			print_ASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
