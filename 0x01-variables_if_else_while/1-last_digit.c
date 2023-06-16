#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - function
  *
  * Return: returns 0 to indicate successful execution
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int (LastD = n % 10);
	printf("Last digit of %d is %d and is ", n, LastD);
	if (n > 5)
	{
		printf("greater than 5\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
