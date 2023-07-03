#include "main.h"

/**
 * _memcpy - Function copies (n) bytes from the memory area pointed
 *           to by (src) into that pointed to by (dest).
 *
 * @dest: A pointer to the memory area to copy @src into.
 *
 * @src: The source buffer to copy characters from.
 *
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[i];
		n--;
	}
	return (dest);
}
