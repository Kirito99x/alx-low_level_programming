#include "main.h"

/**
 * print_square - print a square using the char #
 *
 * @size: is the size of the square
 *
 * Retrun: always 0 success
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (coumn = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
