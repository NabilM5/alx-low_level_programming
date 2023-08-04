/*
 * File: 3-set_bit.c
 * Auth: Nabil Mouhamech
 */
#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1.
 * @n: The number to set bit in
 * @index: The index to set bit at
 *
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
