#include <stdio.h>

/**
  * main - The entry point of the program
  *
  * Return: returns 0 to indicate successful execution
  */
int main(void)
{
	int n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
