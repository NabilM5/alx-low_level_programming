#include <stdio.h>
/**
  * main - The entry point of the program
  *
  * Return: returns 0 to indicate successful execution
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
