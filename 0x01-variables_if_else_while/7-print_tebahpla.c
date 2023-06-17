#include <stdio.h>
/**
  * main - The entry point of the program
  *
  * Return: returns 0 to indicate successful execution
  */
int main(void)
{
	int num = 122;

	while (num >= 97)
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}
