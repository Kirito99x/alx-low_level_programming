#include"main.h"

/**
 * print_sign - prints + if n is greater than zero and 0 if n is less than zero
 *
 * @C: input intger from other function
 *
 * Return: 1 if positive zero if zero  -1 if negtive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);	
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
