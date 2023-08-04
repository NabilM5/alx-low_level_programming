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
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
