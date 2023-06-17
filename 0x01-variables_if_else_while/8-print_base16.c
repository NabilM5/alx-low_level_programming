#include <stdio.h>
/**
  * main - The entry point of the program
  *
  * Return: returns 0 to indicate successful execution
  */
int main(void)
{
	int num;
	int m;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
