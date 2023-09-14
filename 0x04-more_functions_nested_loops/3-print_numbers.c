#include "main.h"

/**
 * print_numbers - from 0-9
 *
 * Return: 0 when success
*/

int print_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}
