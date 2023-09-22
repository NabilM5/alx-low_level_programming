#include <stdio.h>

/* add.c */
int add(int a, int b)
{
	return (a + b);
}

/* sub.c */
int sub(int a, int b)
{
	return (a - b);
}

/* mul.c */
int mul(int a, int b)
{
	return (a * b);
}

/* div.c */
int div(int a, int b)
{
	if (b == 0)
		return (-1); /* Error: division by zero */
	return (a / b);
}

/* mod.c */
int mod(int a, int b)
{
	if (b == 0)
		return (-1); /* Error: modulo by zero */
	return (a % b);
}
