#include <unistd.h>

/**
 * main - entry point
 *
 * Description: c progam that  use unistd and quo function to print
 *
 * Return: (0) zero when success
 */
int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
