/*
 * File: 2-get_bit.c
 * Auth: Nabil Mouhamech
 */
#include "main.h"

/**
 * get_bit - A function that return the value of a bit at a index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 *
 * Return: The value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
