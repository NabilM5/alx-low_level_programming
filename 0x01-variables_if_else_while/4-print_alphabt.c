#include <stdio.h>
/**
  * main - The entry point of the program
  *
  * Return:  returns 0 to indicate successful execution
  */
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		if (num == 101 || num == 113)
		{
			num++;
			continue;
		}
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
