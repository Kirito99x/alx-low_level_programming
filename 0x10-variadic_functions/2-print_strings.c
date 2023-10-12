#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = n;
	char *string;

	va_start(strings, n);
	for (; i; i--)
	{
		string = va_arg(strings, char *);
		printf("%s", string != NULL ? string : "(nil)");
		if (separator != NULL && i - 1 != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
