#include "variadic_functions.h"

/**
 * print_all - prints all the legal formats passed
 *
 * @format: character string with formats
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
