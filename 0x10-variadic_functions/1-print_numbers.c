#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * Return: integer result or 0 if n == 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = n;

	va_start(args, n);
	for (; i; i--)
	{
		printf("%d", va_arg(args, int));
		if (i - 1 != 0 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
