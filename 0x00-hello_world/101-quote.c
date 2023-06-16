#include <stdio.h>
#include <unistd.h>

/**
  * main - function includes a description of the return value.
  *
  * Return: 0 on successful execution
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
