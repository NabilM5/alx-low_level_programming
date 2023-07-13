#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - alloctes memory using malloc
 *
 * @b: number of blocks required
 *
 * Return: pointer to allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
